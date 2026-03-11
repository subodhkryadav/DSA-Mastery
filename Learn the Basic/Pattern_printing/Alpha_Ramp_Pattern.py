def Alpha_Ramp_Pattern(n):
    ch=ord('A')
    for  i in range(1,n+1):
        for j in range(1,i+1):
            print(chr(ch),end="")
        print()
        ch=ch+1
n=int(input("Enter the value of n: "))
Alpha_Ramp_Pattern(n)