def Number_Crown_Pattern(n):
    for i in range(1,n+1):
        # number
        for j in range(1,i+1):
            print(j,end="")
        
        #spaces 
        for j in range(2*(n-i)):
            print(" ",end="")
        
        # number 
        for j in range(i,0,-1):
            print(j,end="")
        print()
n=int(input("Enter the value of n: "))
Number_Crown_Pattern(n)