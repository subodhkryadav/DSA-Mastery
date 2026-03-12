var=1
def Number_Print():
    global var
    if var==11:
        return 
    print(var)
    var=var+1
    Number_Print()
Number_Print()