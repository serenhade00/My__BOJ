N = int(input())
arr = list(map(int, input().split()))
M = int(input())
for _ in range(M):
    k, l, r = map(int, input().split())
    if(k == 1):
        for i in range(l-1, r):
            arr[i] = (arr[i] * arr[i]) % 2010
    else:
        sum = 0
        for i in range(l-1, r):
            sum += arr[i]
        print(sum)