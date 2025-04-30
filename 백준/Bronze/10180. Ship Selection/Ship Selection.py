for _ in range(int(input())) :
    N, D = map(int, input().split())
    cnt = 0
    for _ in range(N) :
        V, F, C = map(int, input().split())
        if V * (F / C) >= D : cnt += 1
    print(cnt)