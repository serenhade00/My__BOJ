import sys

def func():
    input = sys.stdin.readline
    Ds = set(list(map(int, input().split()))) 
    res = 0
    for number in range(1, 5): 
        if number not in Ds: 
            res += 1    
    print(res)
func()