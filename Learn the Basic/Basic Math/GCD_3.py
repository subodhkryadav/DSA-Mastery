def GCD(a,b):
    while(a>0 and b>0):
        if a>b: 
            a=a%b
        else:
            b=b%a
    if a==0:
        return f"The GCD of {a} amd {b} ia {b}"
    elif b==0:
        return f"The GCD of {a} amd {b} ia {a}"
n=int(input("Enter the first number: "))
m=int(input("ENter teh second number: "))

print(GCD(n,m))