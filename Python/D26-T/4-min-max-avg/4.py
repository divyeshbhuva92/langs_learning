# Develop python program to find maximum, minimum 
# and average of given numbers using user define function.

def max_num(num_list):
    if(len(num_list) > 0):
        maximum = max(num_list)
        print(maximum)
    
def min_num(num_list):
    if(len(num_list) > 0):
        minimum = min(num_list)
        print(minimum)
    
def average(num_list):
    sum = 0
    for i in range(len(num_list)):
        sum = sum + num_list[i]
    avg = sum / len(num_list)
    print(avg)
      

list=[]
list_len = int(input('Enter length of list :'))

for i in range(list_len):
    x = int(input('enter value:'))
    list.append(x)
    
max_num(list) 
min_num(list)
average(list)