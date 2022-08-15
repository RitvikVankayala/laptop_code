from distutils.util import convert_path


input_string=list(input("ENTER THE STRING OF NUMBERS"))
convert_list=[]
for i in input_string:
    convert_list.append(int(i))
print(convert_list)

for i in range(0,len(convert_list)):
    for j in range(0,10):
        if convert_list[i]
