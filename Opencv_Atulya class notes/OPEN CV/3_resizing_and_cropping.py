import cv2 as cv
import numpy as np

img=cv.imread("asserts/lenna.png")

img_resize=cv.resize(img,(300,200))
#for resizing the img to resized_image with width and height as parameters

img_cropped=img[0:700,300:500]
#FOR cropping image with first y dimension next x dimension

cv.imshow("IMAGE",img)
print(img.shape)
#for printing the shape of img

cv.imshow("NEW_IMAGE",img_resize)
print(img_resize.shape)
#for printing the shape of img_resize

print(img_cropped.shape)
cv.imshow("CROPPED_IMAGE",img_cropped)
#for printing the shape of img_cropped

cv.waitKey(0)