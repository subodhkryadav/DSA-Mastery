def password_validator(passweord):
    if len(passweord)>=8:
        for i in password:
            new_srt="0123456789"
            if i in new_srt:
                return "The password is valid"
    else:
        return "The password is not valid"
    
password=input("Enter your password: ")
print(password_validator(password))