import cv2 as cv
import numpy as np

#creating a black screen
img=np.zeros((512,512,3),np.uint8)
# print(img.shape)
# print(img)
# img[:]=255,0,0 -->for coloring the entire black screen

# cv.line(img,(0,0),(300,300),(255,0,0),3)
#for drawing a line
cv.line(img,(0,0),(img.shape[1],img.shape[0]),(0,0,255),3)
#for drawing a rectangle
cv.rectangle(img,(0,0),(200,200),(0,255,0),cv.FILLED)
#for drawing a circle
cv.circle(img,(400,50),30,(255,255,0),cv.FILLED)
#for putting a text in a window
cv.putText(img,"THIS IS MY FIRST TEXT",(100,300),cv.FONT_HERSHEY_COMPLEX,1,(255,300,33),4)
cv.imshow("image",img)
cv.waitKey(0)