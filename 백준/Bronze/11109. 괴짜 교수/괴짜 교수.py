t=int(input().strip())
for _ in range(t):
    d,n,s,p=map(int,input().strip().split())
    if d+n*p==n*s:print("does not matter")
    elif d+n*p>n*s:print("do not parallelize")
    else:print("parallelize")
