n=int(input("Enter number 1\n"))
n1= int(input("Enter number 2\n"))
l= min(n,n1)
for i in range(1, n+1):
        if n%i == 0 and n1%i == 0 :
            fact =i
print("GCD = " ,+ fact)    # if data type is different then we have to saperat them with comma ","