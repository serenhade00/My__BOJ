c,k,p=map(int,input().strip().split())
cnt=0
for i in range(1,c):
    cnt+=k*i+p*(i**2)
cnt+=k*c+p*(c**2)
print(cnt)
