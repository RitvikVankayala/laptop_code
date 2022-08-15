import cv2 as cv
import numpy as np

img=cv.imread("asserts/lenna.png")
#for reading image
img_gray=cv.cvtColor(img,cv.COLOR_BGR2GRAY)
#for converting img to gray image
img_blur=cv.GaussianBlur(img_gray,(7,7),0)
#for converting img to blur image
img_canny=cv.Canny(img,150,200)
#for edge detecion
kernal=np.ones((5*5),np.uint8)
#as a parameter in dilation changing the 5*5 matrices to all ones whose range is from 0 to 255
img_dilation=cv.dilate(img_canny,kernal,iterations=1)
#for joining the little left spaces between two edges
#iteration represent the relative thickness
img_erosion=cv.erode(img_dilation,kernal,iterations=1)
#opposite of dilation
cv.imshow("IMG",img)
cv.imshow("IMG_GRAY",img_gray)
cv.imshow("IMG_BLUR",img_blur)
cv.imshow("IMG_CANNY",img_canny)
cv.imshow("IMG_DILATION",img_dilation)
cv.imshow("IMG_EROSION",img_erosion)
#for showing respective images in respective windows

cv.waitKey(0)