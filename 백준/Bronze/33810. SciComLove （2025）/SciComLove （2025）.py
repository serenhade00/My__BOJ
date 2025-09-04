from sys import stdin

def func():
    input = stdin.readline
    S = input().rstrip()
    SciComLove = 'SciComLove'
    res = 0
    for idx in range(10): 
        if S[idx] != SciComLove[idx]:
            res += 1
    print(res)
func()