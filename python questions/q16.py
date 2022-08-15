#taking no.of test cases as input
num_of_testcases=(int(input("ENTER THE NUMBER OF TEST CASES: ")))
#until the no.of test cases will be zero the loop will run
while num_of_testcases:
    #inputting the upper bound 
    upper_most=(int(input("ENTER THE VALUE UP TO WHICH YOU WANT TO FIND THE PRIME NUMBERS ")))
    print("THE PRIME NUMBERS WILL BE ",end=' ')
    #iterating through out the loop
    for i in range(1,upper_most):
        #iterating through the sub grp starting from 2 and different values of i
        for j in range(2,i):
            #when i divided by j it leaves 0 remainder
            if(i%j==0):
                break
        else:
            print(i,end=' ')
    #Print to clear or enter into new line
    print()
    num_of_testcases=num_of_testcases-1