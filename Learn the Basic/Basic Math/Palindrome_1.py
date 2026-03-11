n=int(input("Enter the number: "))
reverse=int(str(n)[::-1])
if reverse==n:
    print("This is palindrome number")
else:
    print("This is not palindrome number")
