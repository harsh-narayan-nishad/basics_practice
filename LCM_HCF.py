num1 = int(input("Enter number 1\n"))
num2 = int(input("Enter number 2\n"))
a = num1
b = num2

while(num1 != num2):
    if(num1> num2):
        num1-=num2
    else:
        num2-=num1

print("HCF of ", a, " and ",b," is ", num1)

lcm = int(a*b/num1)

print("LCM of ", a, " and ",b," is ", lcm)
