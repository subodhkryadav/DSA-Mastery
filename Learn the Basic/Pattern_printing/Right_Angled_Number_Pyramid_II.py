# Right_Angled_Number_Pyramid_II
""" 1
    22
    333
    4444
    55555
"""

def Right_Angle_Number_Pyramid_II(n):
    for i in range(1,n+1):
        for j in range(i):
            print(i,end="")
        print()
n=int(input("Enter the value of n: "))
Right_Angle_Number_Pyramid_II(n)