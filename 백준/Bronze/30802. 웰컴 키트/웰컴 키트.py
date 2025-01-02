n=int(input())
lst=list(map(int,input().split()))
t,p = map(int,input().split())
bundle=0

for i in lst:
    if i==0:
        continue
    elif i<=t:
        bundle+=1
    elif i%t==0:
        bundle+=i//t
    else:
        bundle+=i//t+1

p_bundle=n//p
pen=n%p

print(bundle)
print(f'{p_bundle} {pen}')