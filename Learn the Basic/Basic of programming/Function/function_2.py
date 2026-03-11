def calculator(a,b):
    sum=a+b
    sub=a-b
    mult=a*b
    div=a/b
    return sum,sub,mult,div

a=int(input("Enter the a: "))
b=int(input("Enter the b: "))

#call the function
print(calculator(a,b))