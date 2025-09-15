from sys import stdin

def func():
    input = stdin.readline
    Q = int(input())
    answer = []
    for _ in range(Q):
        S = input().rstrip()
        cnt = 0
        res = 0
        for idx in range(len(S)):
            if S[idx] == 'W':
                if cnt == 2:  
                    res += 1
                cnt = 1 
            elif cnt == 1 and S[idx] == 'O':  
                cnt = 2
            else:
                cnt = 0  
        answer.append(res)
    print('\n'.join(map(str, answer)), end='')
func()