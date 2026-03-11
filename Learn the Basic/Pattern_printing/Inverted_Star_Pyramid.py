def pyramid(n):
    for i in range(n):
        for j in range(i):
            print(" ",end="")
        
        for j in range(2*(n-i)-1):
            print("*",end="")
        
        for j in range(i):
            print(" ",end="")
        print()
n=int(input("Enter the n: "))
pyramid(n)        
    