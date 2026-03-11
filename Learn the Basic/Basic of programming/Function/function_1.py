# Addition functin
def addtion(a,b):
    return a+b

# subtracting function
def subtract(a,b):
    return a-b

#multiplication fucntion
def multiply(a,b):
    return a*b

#Division function
def division(a,b):
    return a/b


a=int(input("Enter the value of a: "))
b=int(input("Enter the value of b: "))

#now call the function: 
print(f"Addition of {a} and {b} is: ",addtion(a,b))

print(f"subtraction of {a} and {b} is: ",subtract(a,b))

print(f"multplication of {a} and {b} is: ",multiply(a,b))

print(f"division of {a} and {b} is : ",division(a,b))