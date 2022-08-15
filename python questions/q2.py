#inputing the credit card number
#considering general credit card which contains 16 numbers
credit_card_number=input("ENTER THE CREDIT CARD : ")
#excet last four charectors remaining members of string gets concatenate with 4 asterisk 
final_credit_card_number =  "************"+credit_card_number[0:4]
print("THE FINAL REQUIRED CREDIT CARD NUMBER IS :",final_credit_card_number)
