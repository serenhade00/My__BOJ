n, m, k = map(int, input().split())
if n >= m*k:
    print(n-m*k, n-m*(k-1)-1)
else:
    print(0, n-m*(k-1)-1)