n, k = map(int, input().split())
bullet = 0
save_bullet = 0
for _ in range(n):
    s = input()

    if s == "save":
        save_bullet = bullet
    elif s == "load":
        bullet = save_bullet
    elif s == "shoot":
        bullet -= 1
    else:
        bullet += k

    print(bullet)