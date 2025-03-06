p = int(input())
for _ in range(p):
    i = int(input())
    res = 0
    for j in range(1, i+1):
        res += j**2
    print(res)