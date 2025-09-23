import sys

def func():
    input = sys.stdin.readline
    m, n = int(input()), int(input())
    print(m * n)
    
func()