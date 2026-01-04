import sys

def func():
    input = sys.stdin.readline
    n = int(input())
    for _ in range(n):
        X = int(input())
        ex = input().rstrip()
        ex = ex.replace('!', '10')  
        res = eval(ex)  
        if res >= 10:  
            print("!")
        else:
            print(res)
func()