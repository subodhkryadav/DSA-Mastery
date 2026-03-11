def trangle(n):
    for i in range(1,n+1):
        for j in range(i):
            print("*",end="")
        print()
        
def low_traingle(n):
    for i in range(1,n+1):
        for j in range(n-i):
            print("*",end="")
        print()
        
n=int(input("Enter n: "))
trangle(n)
low_traingle(n)