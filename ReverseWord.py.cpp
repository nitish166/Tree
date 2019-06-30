
#for input
t= int(input())
for i in range(0,t):
    # taking multiple inputs at a time  
    # and type casting using list() function 
    s=list(map(str,input().split(".")))
    #join() function are used for merged the string and ::-1 is used 
    #for reverse the string array
    s='.'.join(s[::-1])
    print(s)

