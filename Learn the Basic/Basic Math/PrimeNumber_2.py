import math as m
def PrimeNumber(n):
    count=0
 
    for i in range(1,int(m.sqrt(n))+1):
        if n%i==0:
            count=count+1
            if i!=n//i:
                count+=1
    if count==2:
        return "This is Prime Number"
    else:
        return "This is not Prime Number"
n=int(input("Enter the value of n: "))
print(PrimeNumber(n))
