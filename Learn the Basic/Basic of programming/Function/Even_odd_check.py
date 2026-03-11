def Even_odd_check(a):
    if a%2==0:
        return "EVEN"
    else:
        return "ODD"
    
a=int(input("Enter the number: "))
print("the number is: ",Even_odd_check(a))