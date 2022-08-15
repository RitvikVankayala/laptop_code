#defining the function
def repeat_letter_string(strings):
    initial_empty_string=""
    for letter in strings :
        initial_empty_string=initial_empty_string+(letter*2)
    return initial_empty_string
#inputing the string from the user
user_inputstring=input("ENTER THE STRING : ")
#function call and printing the final string
output_string=repeat_letter_string(user_inputstring)
print(output_string)