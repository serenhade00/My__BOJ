s1,s=map(int,input().split())
n1,n=map(int,input().split())
u1,u=map(int,input().split())
max_s=(s*10)/(10*s1-500 if 10*s1>=5000 else 10*s1)
max_n=(n*10)/(10*n1-500 if 10*n1>=5000 else 10*n1)
max_u=(u*10)/(10*u1-500 if 10*u1>=5000 else 10*u1)
if(max(max_s,max_n,max_u)==max_s):
    print("S")
elif(max(max_s,max_n,max_u)==max_n):
    print("N")
else:
    print("U")