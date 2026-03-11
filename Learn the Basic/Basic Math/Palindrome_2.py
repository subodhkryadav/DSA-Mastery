n=int(input("Enter the value of n: "))
dup=n
rev=0
while(n>0):
    last=n%10
    rev=(rev*10)+last
    n=n//10
if rev==dup:
    print("This is palindrome number")
else:
    print("This is not palindrome number")
