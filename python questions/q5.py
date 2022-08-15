#importing array
from array import *
#inputing the array of size 100
input_array=array('i',[])
#taking the value of array from the user
for i in range(0,99):
    input_value=(int(input("ENTER THE VALUE OF I --> ")))
    input_array.append(input_value)
#sorting the array
sorted_array=sorted(input_array)
#on sorting identical elements come next to each other
for i in range(0,98):
#if two consective elements of sorted array are equal then it will be the duplicate
    if sorted_array[i]==sorted_array[i+1]:
        print("THE DUPLICALTE NUMBER IS : ",sorted_array[i])
    