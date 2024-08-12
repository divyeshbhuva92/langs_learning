
def sum_of_digs(num):
    ans = 0
    # val = str(num)
    
    # if(num >= 0):
    #     for i in range(len(val)):
    #         ans = ans + int(val[i])
    # else:
    #     for i in range(1, len(val)):
    #         ans = ans + int(val[i])
    
    while(num > 0):
            a = num%10
            ans = a + ans
            num=num//10

    print(ans)

    