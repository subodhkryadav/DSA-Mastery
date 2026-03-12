def number(n):
    if n==0:
        return 
    print(n,end=" ")
    n-=1
    number(n)
n=int(input("Enter the number of N: "))
number(n)
    
    