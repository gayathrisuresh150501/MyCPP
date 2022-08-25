#num = list(map(int, input()))
#print(len(num))

X = int(input())
Y = int(input())
N = int(input())

l = []
global temp
temp = 0
for i in range(X, Y + 1):
    for j in range(1,i + 1):
        if (i % j == 0):
            break
        temp = j
    if (temp == i):
        l.append(i)
print(l)