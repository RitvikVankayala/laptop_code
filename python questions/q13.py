#definig a function
def odd_occur_num(input_values):
    #if length is one then it will only be the odd occured number
    if len(input_values)==1:
        return input_values[0]
    #sorting operation
    input_values.sort()
    #traversing accross the imput_values 
    for i in range (0,len(input_values)-1,2):
    #if the number and side number are not equal then it will be odd occured value
        if input_values[i]!=input_values[i+1]:
            return input_values[i]
    #if all occurences are even then it returns -1
    return -1

# creating an empty memory 
input_array= []
# number of elements as input
n = int(input("Enter number of elements : "))
# iterating till the range
for i in range(0, n):
    num = int(input()) 
     # adding the element
    input_array.append(num)
      
store_odd_occur=odd_occur_num(input_array)
print("THE NUMBER WITH ODD OCCURENCES IS ",store_odd_occur)