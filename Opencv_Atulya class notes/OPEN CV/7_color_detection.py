import cv2 as cv
import numpy as np

#----------------------------------------------------
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
#-----------------------------------------------------------------------------------
#just for a function in create trackbar
def empty(a):
        pass
#crating trackbar function
cv.namedWindow("TRACK_BARS")
#resizing the track bar window
cv.resizeWindow("TRACK_BARS",640,240)

#creating different trackbars in a single window
cv.createTrackbar("HUE_MIN","TRACK_BARS",0,179,empty)
cv.createTrackbar("HUE_MAX","TRACK_BARS",0,179,empty)
cv.createTrackbar("SAT_MIN","TRACK_BARS",0,255,empty)
cv.createTrackbar("SAT_MAX","TRACK_BARS",0,255,empty)
cv.createTrackbar("VAL_MIN","TRACK_BARS",0,255,empty)
cv.createTrackbar("VAL_MAX","TRACK_BARS",0,255,empty)

#running a loop
while True:

    img=cv.imread("resources/task.jpg")
    img_hsv=cv.cvtColor(img,cv.COLOR_BGR2HSV)
    #storing values in the variable
    h_min=cv.getTrackbarPos("HUE_MIN","TRACK_BARS")
    h_max=cv.getTrackbarPos("HUE_MAX","TRACK_BARS")
    s_min=cv.getTrackbarPos("SAT_MIN","TRACK_BARS")
    s_max=cv.getTrackbarPos("SAT_MAX","TRACK_BARS")
    v_min=cv.getTrackbarPos("VAL_MIN","TRACK_BARS")
    v_max=cv.getTrackbarPos("VAL_MAX","TRACK_BARS")
    #printing the values
    # print(h_min,h_max,s_min,s_max,v_min,v_max)
    #lower limit and upper limit for masking
    lowerlimit=np.array([h_min,s_min,v_min])
    upperlimit=np.array([h_max,s_max,v_max])
    #masked image
    #for producing mask
    mask=cv.inRange(img_hsv,lowerlimit,upperlimit)
    #for embending mask with img color
    img_result=cv.bitwise_and(img,img,mask=mask)
    #using mergsed image funciton
    merged_image=stackImages(0.2,([img,img_hsv],[mask,img_result]))
    cv.imshow("merge",merged_image)
    # cv.imshow("LAMBO",img)
    # cv.imshow("LAMBO_HSV",img_hsv)
    # cv.imshow("MASKED IMG",mask)
    # cv.imshow("RESULT_IMG",img_result)
    cv.waitKey(1)