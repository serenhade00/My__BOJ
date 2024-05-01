for i in range(1, int(input()) + 1) :
    h, m = map(int, input().split())
    if m < 45 :
        m += 15
        h -= 1
    else :
        m -= 45
    if h == -1 : h = 23
    print(f"Case #{i}: {h} {m}")
