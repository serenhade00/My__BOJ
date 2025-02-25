X, Y = map(int, input().split())

cnt = 1
while True:
    if Y*cnt - X*cnt >= Y:
        break
    cnt += 1
print(cnt)