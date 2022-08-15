#importing array 
from array import *
#inputing array
input_array=array('i',[])
#inputing length of array
length_of_array=(int(input("ENTER THE LENGTH OF THE ARRAY : ")))
#adding the user defined values to array
for i in range(length_of_array):
    value_input=(int(input("ENTER THE VALUE : ")))
    input_array.append(value_input)
#defining test variables for saving data
mock_variable1=0
mock_variable2=0
initial_index=0
#counting the number of times a particular number is present in an array
for i in range(length_of_array):
    mock_variable1=input_array.count(input_array[i])
#updating evertime the mock variable 2 for max count
    if mock_variable1>mock_variable2:
        mock_variable2=mock_variable1
#initial index will be updated and the final value will be the index with high frequency
        initial_index=i
#printing the number which has high frequency
print("THE HIGHEST FREQUENCY ELEMENT IN THE GIVEN ARRAY IS --> ",input_array[initial_index])

