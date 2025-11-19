import sys

def func():
    N = int(input())
    values = [float(input()) for _ in range(N)]
    
    res = 0
    avg = (sum(values) / N) if N != 0 else 0
    for value in values:
        if abs(value - avg) > 10:
            res += 1  
    print(res)
func()