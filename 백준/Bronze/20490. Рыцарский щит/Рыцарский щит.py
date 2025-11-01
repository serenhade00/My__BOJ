from sys import stdin


def func():
    input = stdin.readline
    
    a1, b1, c1 = map(int, input().split())
    a2, b2, c2 = map(int, input().split())
    
    res = a1 + b1 + c1 + a2 + b2 + c2 
    res -= 2 * min(max(a1, b1, c1), max(a2, b2, c2))
    print(res)

func()