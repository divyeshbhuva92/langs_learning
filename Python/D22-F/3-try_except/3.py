# 

x = int(input('Enter val 1 : '))
y = int(input('Enter val 2 : ')) 

def divide(x, y):
    try:
        # Floor Division : Gives only Fractional Part as Answer
        result = x // y
        print("Yeah ! Your answer is :", result)
    except Exception as e:
       # By this way we can know about the type of error occurring
        print("The error is: ",e)

divide(x,y)