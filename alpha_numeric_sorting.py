inp = input()
ls = list(inp.split(" "))
string_list = []
num_list = []
sorted_list = []
size_of_list = len(ls)
for i in range(size_of_list):
    val = ls[i]
    if (i % 2 == 0):
        string_list.append(val)
    else:
        num_list.append(int(val))
num_list.sort()
string_list.sort()
j = 0 #alpha
k = 0 #num
for i in range(size_of_list):
    if (i % 2 == 0):
        val = string_list[j]
        j += 1
        sorted_list.append(val)
    else:
        val = num_list[k]
        k += 1
        sorted_list.append(val)

print(sorted_list)
