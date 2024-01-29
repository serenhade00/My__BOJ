def cal(num):
    print(int((num * (num + 1))/2), end=' ')
    print(num * num, end=' ')
    print(num * (num + 1))

h = int(input())

for i in range(h):
    inp = int(input())
    cal(inp)