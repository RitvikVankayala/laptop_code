#importing random
import random
#generating random number
random_generator = list(str(random.randint(0000,9999)))
#if the number is three digit number it adds 0 in front
if len(random_generator) == 3:
    random_generator.insert(0,'0')
#if the number is two digit number it adds 0 first two indices
if len(random_generator) == 2:
    random_generator.insert(0,'0')    
    random_generator.insert(1,'0')
#if the number is one digit number it adds 0 first three indices
if len(random_generator) == 1:
    random_generator.insert(0,'0')    
    random_generator.insert(1,'0') 
    random_generator.insert(2,'0')   

#printing the randomly generated code 
print("THE RANDOM GENERATED CODE IS ",random_generator)
#for 10 inputs
for i in range(0,10):
    test_variable = 0
    #inputting the guess number
    guess_number = list(input("Enter your guess:"))
    for j in guess_number:
    #if the number in random is in guess but not correctly placed then it will count the value and add to test variable
        if random_generator.count(j)>0:
            test_variable=test_variable+1   
    #if guess is correct prints r              
    if guess_number == random_generator:
        print("R")
        break
    elif test_variable == 4:
        print("Y")
    else:
        print("B")        
    
        