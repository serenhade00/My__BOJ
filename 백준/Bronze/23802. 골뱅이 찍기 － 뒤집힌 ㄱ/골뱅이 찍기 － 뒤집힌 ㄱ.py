import sys
input = sys.stdin.readline
N = int(input().rstrip())

for _ in range(N):
    print('@@@@@'*N)

for _ in range(N*4):
    print('@'*N)