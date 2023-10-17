num = int(input())
for _ in range(num):
    print("*" * (_ + 1))
for _ in range(num - 1, 0, -1):
    print("*" * _)