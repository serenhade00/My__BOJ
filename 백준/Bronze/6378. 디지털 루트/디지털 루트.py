import sys
input = sys.stdin.readline

while True:
    num = int(input())
    if num == 0:
        break
    while (1):
        num = sum(list(map(int, str(num))))
        if (num // 10 == 0):
            print(num)
            break