#defining function
def change_order(lists,strings) :

    if strings=="asc":
        lists.sort()
        return lists

    elif strings=="desc":
        lists.sort(reverse=True)
        return lists

    elif strings=="none":
        return lists
#inputing string
input_string=input("ENTER THE STRING :")
#inputing the list of numbers and converting input to integers from string
input_list = [int(i) for i in input("ENTER THE LIST :").split()]
#function call
final_result=change_order(input_list,input_string)
#printing final result
print(final_result)