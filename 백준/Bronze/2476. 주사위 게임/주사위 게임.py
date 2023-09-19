import sys
result = 0
mx = 0
test = int(sys.stdin.readline())
for i in range(test):
    a, b, c = map(int, sys.stdin.readline().split())
    if a == b == c:
        result = 10000 + (a * 1000)
    elif a == b or a == c:
        result = 1000 + (a * 100)
    elif b == c:
        result = 1000 + (b * 100)
    else:
        if a > b > c or a > c > b:
            result = a * 100
        elif b > a > c or b > c > a:
            result = b * 100
        else:
            result = c * 100
    if mx < result:
        mx = result
print(mx)