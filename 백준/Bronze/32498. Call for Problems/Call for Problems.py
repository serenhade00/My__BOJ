res = 0
for _ in range(int(input())):
    n = int(input())
    if n % 2 != 0:
        res += 1
print(res)