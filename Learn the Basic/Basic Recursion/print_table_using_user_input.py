i=1
def table(n):
    global i
    if i==11:
        return 
    print(f"{n} * {i} = {n*i}")
    i=i+1
    table(n)
n=int(input("which number of table do you print please Enter it: "))
table(n)