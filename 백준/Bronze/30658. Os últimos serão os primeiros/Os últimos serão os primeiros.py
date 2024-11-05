while True:
    n = int(input())
    if n == 0:
        break;
    s = []
    for i in range(n):
        num = int(input())
        s.append(num)
    for i in range(n - 1, -1, -1):
        print(s[i])
    print(0)