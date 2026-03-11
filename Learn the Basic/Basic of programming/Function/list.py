def take_input_print_it(n):
    list_1=[]
    print("Enter the list Element: ")
    for i in range(n):
        list_1.append(input())

    print("Here your input list elements: ")   
    for  i in list_1:
        print(i)

n=int(input("Enter the n: "))
take_input_print_it(n)