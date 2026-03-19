n=int(input())
a = list(map(str,input().split()))
q = set()
for i in range(n):
    q.add(a[i][0])
 
print(1 if len(q) == 1 else 0)