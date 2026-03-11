def Reverse_Letter_Triangle_Pattern(n):
    for i in range(n):
        for j in range(ord('A'),(ord('A')+(n-i-1))+1):
            print(chr(j),end="")
        print()
n=int(input("Enter the value of n: "))
Reverse_Letter_Triangle_Pattern(n)
