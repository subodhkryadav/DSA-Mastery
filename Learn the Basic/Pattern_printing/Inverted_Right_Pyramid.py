# Inverted_Right_Pyramid
def Inverted_Right_Pyramid(n):
    for i in range(1,n+1):
        for j in range(i,n+1):
            print("*",end="")
        print()
# call the function
n=int(input("Enter the number of n: "))
Inverted_Right_Pyramid(n)