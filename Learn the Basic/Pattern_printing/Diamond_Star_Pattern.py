def upper(n):
    for i in range(n):
        for j in range(n-i-1):
            print(" ",end="")
        for j in range(2*i+1):
            print("*",end="")
        for j in range(n-i-1):
            print(" ",end="")
        print()

def lower(n):
    for i in range(n):
        for j in range(i):
            print(" ",end="")
        for j in range(2*(n-i)-1):
            print("*",end="")
        for j in range(i):
            print(" ",end="")
        print()
n=int(input("Enter  the value of n: "))

# first call the upper function 
# then call the lower function
upper(n)
lower(n)

