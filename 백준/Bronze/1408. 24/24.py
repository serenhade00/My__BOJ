p = list(map(int, input().split(':')))
r = list(map(int, input().split(':')))
ans=[]

t = r[0] * 3600 + r[1] * 60 + r[2] - (p[0] * 3600 + p[1] * 60 + p[2])

if t < 0:
    t += 60*60*24

ans.append(t//3600)
ans.append((t%3600)//60)
ans.append(t%60)

for i in range(3):
    ans[i] = str(ans[i]).zfill(2)

print('%s:%s:%s'%(ans[0],ans[1],ans[2]))