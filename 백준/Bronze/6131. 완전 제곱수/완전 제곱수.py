import sys

n=int(sys.stdin.readline())
count=0

for i in range(1,n):
    if i**2 - (i-1)**2 > n:
        break
    for j in range(1,i+1):
        if i**2 - j**2 == n:
            count=count+1
print(count)