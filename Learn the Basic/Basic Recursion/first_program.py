count=0
def f():
    global count
    if count==3: # this is the base condtion
        return 
    print(count)
    count=count+1
    f() # this is again calling the function
f()