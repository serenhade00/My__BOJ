ans = 0

for _ in range(int(input())):
    k = list(map(int, input().split()))
    if sum(k) == -3:
        continue

    for i in range(3):
        if k[i] == -1:
            k[i] = 121

    if k[0] <= k[1] <= k[2]:
        ans += 1

print(ans)