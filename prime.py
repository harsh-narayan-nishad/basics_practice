num = int(input("Enter a number to check prime number\n"))
flag =0
for i in range(2, num):
    if num%i == 0:
        flag = 1


if flag == 1:
    print(num, " is not a prime number")

else: 
    print(num, " is a prime number")