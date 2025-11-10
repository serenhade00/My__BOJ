import sys

def func():
    input = sys.stdin.readline
    n, C = map(int, input().split())
    res = 10**9
    for _ in range(n):
        p, d, v = map(int, input().split())
        res = min(res, p + d + C * v)
    print(res)
func()