inp = list(map(int,input().split()))
progression =[]
full_progression = []
progression.append(inp[0])
for i in range(1, len(inp)):
    if (inp[i] > inp [i - 1]):
        progression.append(inp[i])
    elif (inp[i] < inp[i - 1]):
        full_progression.append(progression)
        progression = []
        progression.append(inp[i])
full_progression.append(progression)
max = []
for i in full_progression:
    if len(i) > len(max):
        max = i
print(max)