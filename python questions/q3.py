#function declaration
def calculator(num1,operator,num2):
    if operator=="+":
        c=num1+num2
        return c
    elif operator=="-":
        c=num1-num2
        return c
    elif operator=="*":
        c=num1*num2
        return c
    elif operator=="/":
        c=num1/num2
        return c
    else :
        print("INVALID OPERATOR")
#inputing num1
A=(int(input("ENTER THE VALUE OF NUMBER 1 -->")))
#inputing the operator
operators=input("ENTER THE OPERATOR FOR CALCULATION : ")
#inputing the num2
B=(int(input("ENTER THE VALUE OF NUMBER 2 -->")))
#final desired result
final_output=calculator(A,operators,B)
print("THE FINAL OUTPUT IS ",final_output)