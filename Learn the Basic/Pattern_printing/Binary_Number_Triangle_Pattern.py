def Binary_Number_Triangle_Pattern(n):
    for i in range(n):
        if i%2==0:
            start=1
        else:
            start=0
        for j in range(i+1):
            print(start,end="")
            start=1-start
        print()

n=int(input("Enter the number of n: "))
Binary_Number_Triangle_Pattern(n)
