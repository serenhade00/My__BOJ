t=int(input())
 
dp=[0 for _ in range(101)]
dp[1]=2
dp[2]=4
 
p=3
 
for i in range(3, t+1):
    dp[i]=dp[i-1]+p
    if i%3!=0:
        p+=1
 
print(dp[t])