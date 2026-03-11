# Give an integer n to print the Ractangle start patter for the value n

def pattern_print(n):
    for i in range(n):
        for j in range(n):
            print("*",end="")
        print()

n=int(input("Enter the value of n: "))
pattern_print(n)