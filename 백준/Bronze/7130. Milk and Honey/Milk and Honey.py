m, h = map(int,input().split())

n = int(input())

ans= 0

for i in range(n):
    fd = (list(map(int,input().split())))
    ans += max(fd[0]*m, fd[1]*h)

print(ans)