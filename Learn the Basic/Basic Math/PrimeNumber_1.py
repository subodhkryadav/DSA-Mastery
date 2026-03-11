def Prime_number(n):
    count=0
    for i in range(1,n+1):
        if n%i==0:
            count+=1
    if count==2:
        return "This is prime number"
    else:
        return "This is not prime number"
n=int(input("Enter the value of n: "))
print(Prime_number(n))
