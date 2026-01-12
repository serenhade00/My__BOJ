n = int(input())

c = 1
result = 0

while n >= 1:
    if n < c:
        c = 1
    n = n - c
    result += 1
    c += 1
print(result)