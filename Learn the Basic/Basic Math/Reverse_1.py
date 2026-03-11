n=int(input("Enter the value of n: "))
s=str(n)
for i in range(len(s)-1,-1,-1):
    result=int(s[i])
    print(result,end="")
    