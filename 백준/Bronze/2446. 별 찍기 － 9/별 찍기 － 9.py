import sys
input = sys.stdin.readline

t=int(input())

for i in range(t-1): 
    print(' '*i,end='')
    print('*'*((t-i)*2-1))

for i in range(t): 
    print(' '*(t-i-1),end='')
    print('*'*(i*2+1))