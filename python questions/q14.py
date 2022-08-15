#Required time/space complexity O(LOG(MIN(A,B)))

#defing a function
def find_gcd(a,b):
    if a==0:
        return b
    return find_gcd(b%a,a)

#inputting a and b
a=(int(input("ENTER THE FIRST NUMBER -> ")))
b=(int(input("ENTER THE SECOND NUMBER -> ")))

#printing gcd
gcd_output=find_gcd(a,b)
print("THE GCD OF TWO NUMBERS IS -> ",gcd_output)