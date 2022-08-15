#taking inputs
num1=(int(input("ENTER THE VALUE OF THE NUMBER1 :")))
num2=(int(input("ENTER THE VALUE OF THE NUMBER2 :")))
#printing the taken inputs
print(num1," ",num2)
#applying xor operation
#bitwise swaping
num1 ^=num2
num2 ^=num1
num1 ^=num2
#printing final output
print(num1," ",num2)