n = int(input())
v = []

for i in range(n):
    v.append(int(input()))

if v[0] == max(v):
    print("S")
else:
    print("N")