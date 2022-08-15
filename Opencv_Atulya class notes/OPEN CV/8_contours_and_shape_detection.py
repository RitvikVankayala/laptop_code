import cv2 as cv
# from cv2 import findContours
# from cv2 import RETR_EXTERNAL
# from cv2 import CHAIN_APPROX_NONE
# from cv2 import rectangle
import numpy as np

#----------------------------------
def stackImages(scale,imgArray):
    rows = len(imgArray)
    cols = len(imgArray[0])
    rowsAvailable = isinstance(imgArray[0], list)
    width = imgArray[0][0].shape[1]
    height = imgArray[0][0].shape[0]
    if rowsAvailable:
        for x in range ( 0, rows):
            for y in range(0, cols):
                if imgArray[x][y].shape[:2] == imgArray[0][0].shape [:2]:
                    imgArray[x][y] = cv.resize(imgArray[x][y], (0, 0), None, scale, scale)
                else:
                    imgArray[x][y] = cv.resize(imgArray[x][y], (imgArray[0][0].shape[1], imgArray[0][0].shape[0]), None, scale, scale)
                if len(imgArray[x][y].shape) == 2: imgArray[x][y]= cv.cvtColor( imgArray[x][y], cv.COLOR_GRAY2BGR)
        imageBlank = np.zeros((height, width, 3), np.uint8)
        hor = [imageBlank]*rows
        hor_con = [imageBlank]*rows
        for x in range(0, rows):
            hor[x] = np.hstack(imgArray[x])
        ver = np.vstack(hor)
    else:
        for x in range(0, rows):
            if imgArray[x].shape[:2] == imgArray[0].shape[:2]:
                imgArray[x] = cv.resize(imgArray[x], (0, 0), None, scale, scale)
            else:
                imgArray[x] = cv.resize(imgArray[x], (imgArray[0].shape[1], imgArray[0].shape[0]), None,scale, scale)
            if len(imgArray[x].shape) == 2: imgArray[x] = cv.cvtColor(imgArray[x], cv.COLOR_GRAY2BGR)
        hor= np.hstack(imgArray)
        ver = hor
    return ver
#----------------------------------

def getcontours(img):
        contours,hierarchy=cv.findContours(img,cv.RETR_EXTERNAL,cv.CHAIN_APPROX_NONE)
        for cnt in contours:
            area=cv.contourArea(cnt)
            print(area)
            if area>500:
                cv.drawContours(img_cpy,cnt,-1,(255,0,0),3)
                per=cv.arcLength(cnt,True)
                # print(per)
                approx=cv.approxPolyDP(cnt,0.02*per,True)
                print(len(approx))
                objcontour=len(approx)
                x,y,w,h=cv.boundingRect(approx)
                if objcontour==3:
                    objtype="triangle"
                elif objcontour==4:
                    aspRatio=w/float(h)
                    if aspRatio>0.95 and aspRatio<1.05:objtype="square"
                    else:"rectangle"
                elif objcontour>5:
                    objtype="circle"
                else:
                    objtype="none"
                # cv.rectangle(img_cpy,(x,y),(x+w,y+h),(255,0,0),2)
                cv.putText(img_cpy,objtype,((x+(w//2)-10),(y+(h//2)-10)),cv.FONT_HERSHEY_COMPLEX,0.5,(0,255,255),2)
                





img=cv.imread("asserts/CVtask.jpg")
img_cpy=img
img_grey=cv.cvtColor(img,cv.COLOR_BGR2GRAY)
img_blur=cv.GaussianBlur(img_grey,(7,7),1)
img_canny=cv.Canny(img_blur,100,100)

img_blank=np.zeros_like(img)
getcontours(img_canny)
img_mixed=stackImages(0.4,([img,img_cpy]))
# cv.imshow("shapes",img)
# cv.imshow("grey",img_grey)
# cv.imshow("blur",img_blur)
cv.imshow("merged_image",img_mixed)

cv.waitKey(0)