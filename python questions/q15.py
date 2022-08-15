#inputing the string
input_string=input("ENTER THE STRING : ")

#taking some test variables
test_alphabet=0
test_digit=0
test_spl_chars=0

#traversing accross the input_string
for i in range(len(input_string)):
    #if element is alphabet then it adds one to test_alphabet
    if input_string[i].isalpha():
        test_alphabet+=1
    #if element is digit then it adds one to test_digit
    elif input_string[i].isdigit():
        test_digit+=1
    else:
        test_spl_chars+=1

#printing the no.of alphabets digits and charecters
print("THE NUMBER OF ALPHABETS IN THE STRING IS          ",test_alphabet)
print("THE NUMBER OF DIGITS IN THE STRING IS             ",test_digit)
print("THE NUMBER OF SPECIAL CHARECTERS IN THE STRING IS ",test_spl_chars)