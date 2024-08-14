import sys
n,c=map(int,sys.stdin.readline().strip().split())
result=-c*(n-1)
for _ in range(n):
    m,s=map(int,sys.stdin.readline().strip().split(":"))
    result+=(m*60+s)
print("%02d:%02d:%02d" %(result//3600,result%3600//60,result%3600%60))