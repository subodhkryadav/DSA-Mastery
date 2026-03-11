def GCD(n,m):
    for i in range(min(n,m),0,-1):
        if n%i==0 and m%i==0:
            return f"gcd of {n} and {m} is: {i}"
            break       
n=int(input("Enter the first number: "))
m=int(input("ENter teh second number: "))

print(GCD(n,m))