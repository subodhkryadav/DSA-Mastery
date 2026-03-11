import math as m
def divisors(n):
    lis=[]
    for i in range(1,int(m.sqrt(n))+1):
        if n%i==0:
            lis.append(i)   
            if n//i!=i:
                lis.append(n//i)  
    lis.sort()          
    return lis
n=int(input("Enter the value of n: "))
print(divisors(n))