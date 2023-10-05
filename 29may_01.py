#Find the root of a number using newton's law

num=(float(input("Enter a float number\n")))
approx = 0.5*num
#Find better value

better = 0.5*(approx +num/approx)
#when better found is not equal to approx

while better != approx:
    #Assum the find better value
    approx = better

    #Recalculate the better value
    better = 0.5*(approx + num/approx)

print(better)
