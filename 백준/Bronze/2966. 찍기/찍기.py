A = ['A', 'B', 'C']
B = ['B', 'A', 'B', 'C']
G = ['C', 'C', 'A', 'A', 'B', 'B']
N = int(input())
s = input()

a, b, g = 0, 0, 0
for i in range(N):
    if A[i % 3] == s[i]:
        a += 1
    if B[i % 4] == s[i]:
        b += 1
    if G[i % 6] == s[i]:
        g += 1
        
mx = max(a, b, g)
print(mx)

if a == mx:
    print("Adrian")
if b == mx:
    print("Bruno")
if g == mx:
    print("Goran")