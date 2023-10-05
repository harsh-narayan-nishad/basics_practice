#program for insertion sort
x=[-2,1,0,15,17,81,45]
for i in range(1,len(x)):
    c = i
    while c>0 and x[c]<x[c-1]:
        a=x[c]
        x[c]=x[c-1]
        x[c-1]=a
        c=c-1
print(x)