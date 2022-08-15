import cv2 as cv
#----image capture-----
# img=cv.imread("asserts/img1.jpg")
# #for saving an image to a variable
# cv.imshow('IMAGE',img)
# #showing the image with window name as image
# cv.waitKey(0)
# #delaying for infinite time

#---video capture---
# video=cv.VideoCapture("asserts/v1.mp4")
# #for storing the video in a variable
# while True:
#     succuss,img=video.read()
#     #running a loop for reading an object frame by frame
#     cv.imshow("videos",img)
#     #shows the sequencial images or video
#     if cv.waitKey(1) & 0xFF==ord('q'):
#     #stops video after completion or after pressing the q button
#         break

#---webcam capture-----
# video=cv.VideoCapture(0)
# #for capturing video throungh webcam(internal=0) external(1,2,3...) based on no.of ext cams
# video.set(3,640)
# #for setting width
# video.set(4,480)
# #for setting height
# video.set(10,100)
# #for setting brightness

# while True:
#     #same as that of video capture
#     success,img=video.read()
#     cv.imshow("videos",img)
#     if cv.waitKey(1) & 0xFF==ord('q'):
#         break