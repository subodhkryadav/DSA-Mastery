def Increasing_Letter_Triangle_Pattern(n):
    for i in range(1,n+1):
        for j in range(ord('A'),ord('A')+i): # ord convert into its ascii 
            print(chr(j),end="") # ascii convert into its character value
        print()
n=int(input("Enter the value of n: "))
Increasing_Letter_Triangle_Pattern(n)