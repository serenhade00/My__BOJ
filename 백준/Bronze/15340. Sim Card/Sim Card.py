while 1:
    c, d = map(int, input().split())
    if c == d == 0:
        break
    res = min(c*30 + d*40, c*35 + d*30, c*40 + d*20)
    print(res)