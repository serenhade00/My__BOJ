import sys
t=int(sys.stdin.readline().strip())
d=[0]*10001
for i in range(2,10001):
    if i+i*i<10001:
        for j in range((i-1)+(i-1)*(i-1),i+i*i+1):
            d[j]=i-1
    else:break
for _ in range(t):
    print(d[int(sys.stdin.readline().strip())])