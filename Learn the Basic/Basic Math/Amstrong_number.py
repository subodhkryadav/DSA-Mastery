def Amstrong_number(n):
    leng=len(str(n))
    sum=0
    dup=n
    while(n>0):
        last=n%10
        sum=sum+(last**leng)
        n=n//10
    
    if dup==sum:
        return "This is armstrong number"
    else:
        return "This is not armstrong number"
n=int(input("Enter the value of n: "))
print(Amstrong_number(n))
