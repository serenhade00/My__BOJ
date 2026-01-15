length  = int(input())
n = list(map(int, input().split()))

result = []
for i in range(length):
    temp = n[i] * (i+1)
    for j in range(i):
        temp -= result[j]
    result.append(temp)
    
print(*result)