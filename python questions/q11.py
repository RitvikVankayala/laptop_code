#inputing the string
list_input=list(input("ENTER THE STRING HERE --> "))
#copying the list into a copy_list_input 
copy_list_input=list_input.copy()
#reversing the copied list
copy_list_input.reverse()
#if both the list are equal then print that it is palindrome or not palindrome
if list_input==copy_list_input:
    print("THE GIVEN STRING IS PALINDROME")
else :
    print("THE GIVEN STRING IS NOT PALINDROME")