import cv2 as cv
import numpy as np

#setting the dimension that we require
width,height=250,350

img=cv.imread("asserts/cards.jpg")
#the coordinates of the separated image in merged image
pts1=np.float32([[111,219],[287,188],[154,482],[352,440]])
#the coordinates of the new image
pts2=np.float32([[0,0],[width,0],[0,height],[width,height]])
#converts it into matrix
matrix=cv.getPerspectiveTransform(pts1,pts2)
#wraps it to form the final image
img_output=cv.warpPerspective(img,matrix,(width,height))
cv.imshow("IMAGE",img)
cv.imshow("IMAGES",img_output)
cv.waitKey(0)