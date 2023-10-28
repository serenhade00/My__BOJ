n, t = map(int, input().split())
w = list(map(int, input().split()))
c = 0
total_t = 0
for i in w:
  total_t += i
  if total_t <= t:
    c += 1
  else:
    break  
print(c) 