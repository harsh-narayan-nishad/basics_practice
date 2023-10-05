#program to find roots of quadratic number

a=int(input("Enter value of a\n"))
b=int(input("Enter value of b\n"))
c=int(input("Enter value of c\n"))

d = (b*b -4*a*c) **(1/2)
if d>0:
    print("roots are real and distinct\nroots are\n----------------------------")
    print("root 1: ",(-b + d)/(2*a))
    print("root 2: ",(-b - d)/(2*a))
else:
    print("roots are imaginary")
