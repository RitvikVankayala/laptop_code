#inputting lower and upper bound of the prime numbers
lower_bound=(int(input("ENTER THE LOWER BOUND OF THE RANGE : ")))
upper_bound=(int(input("ENTER THE UPPER BOUND OF THE RANGE : ")))
#printing the lower and upper bound
print("THE PRIMES BETWEEN ",lower_bound," AND ",upper_bound," ARE :- ",end=" ")
#iterating along the range
for i in range(lower_bound,upper_bound+1):
#test varaible for testing either prime or not
    test_variable=0
#checking the divisiblity
    for j in range(2,i):
#checking whether on any number on dividing with j gives remainder 0
         if(i%j)==0:
             test_variable=1
             break
#if i is a prime then test_variable=0 or else 1
    if test_variable==0:
#printing the primes in the range
        print(i,end=" ")
