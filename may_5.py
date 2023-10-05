#program to find a year is leap year or not
a= int(input("Enter a number\n"))
if a%4==0 and a%100!=0:
    print(a," is a leep year")
else:
    print("Not a leap year")