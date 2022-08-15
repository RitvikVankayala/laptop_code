#inputing a string with numbers
input_string=input("ENTER THE STRING HERE :")
#setting initial value of the total sum as 0
net_sum=0
#iterating total string
for charecter in input_string:  
    #if a number is present then it will be added to net_sum
    if(charecter>='0' and charecter<='9'): 
        #converting charector into integer   
        net_sum=net_sum+int(charecter)
#printing the net_sum
print(net_sum)