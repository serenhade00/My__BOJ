while True :
    lst = list(map(int, input().split()))
    if sum(lst) == 0 : break
    cnt = 0
    while True :
        a, b, c, d = lst[0], lst[1], lst[2], lst[3]
        if a == b == c == d : break
        lst[0] = abs(a - b)
        lst[1] = abs(b - c)
        lst[2] = abs(c - d)
        lst[3] = abs(d - a)
        cnt += 1
    print(cnt)