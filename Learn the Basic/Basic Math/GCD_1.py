def GCD(n,m):
    gcd=1
    for i in range(1,min(n,m)+1):
        if n%i==0 and m%i==0:
            gcd=i
    return f"gcd of {n} and {m} is: {gcd}"
n=int(input("Enter the first number: "))
m=int(input("ENter teh second number: "))

print(GCD(n,m))