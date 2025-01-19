n = int(input())

for _ in range(n) :
  data = list(input().split())
  data[0] = 'god'
  for i in range(len(data)) :
    print(data[i], end='')
  
  print()