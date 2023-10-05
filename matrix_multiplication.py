x = [[1,2,3],[2,1,3]]
y = [[1,1],[2,2],[1,2]]
result =[[0,0],[0,0]]

print("Enter value of row and collumn")
row1= input("Enter row 1")
colm1=input("Enter collumn")
for i in range (0,row1-1):
    for j in range (0, colm1-1):
        
if len(x[0])!=len(y):
    raise ValueError("Invalid dimensions for multiplication")
for i in range (len(x)):
    for j in range (len(y[0])):
        for k in range (len(y)):
            result[i][j] += x[i][k]*y[k][j]

for r in result:
    print(r," ")