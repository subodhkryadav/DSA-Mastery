# print the user input Right-Angled Triangle Pattern
def pattern(n):
    for i in range(n):
        for j in range(i):
            print("*",end="")
        print()

n=int(input("Enter the number of n: "))
pattern(n)