cnt = 0
while True:
    N = int(input())
    cnt += 1
    if N == 0:
        break
    elif N % 2 == 0:
        print(f"{cnt}. even {N//2}")
    else:
        print(f"{cnt}. odd {N//2}")