N, C = map(int, input().split())
check = [False]*(C+1)
a = 0

for _ in range(N):
    n = int(input())
    for i in range(n, C+1, n):
        if not check[i]:
            check[i] = True
            a += 1
print(a)