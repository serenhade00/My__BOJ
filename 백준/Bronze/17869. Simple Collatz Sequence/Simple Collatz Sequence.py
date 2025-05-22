a = int(input())
cnt=0
while True:
  if a==1:
    break
  if a%2!=0:
    a=a+1
  elif a%2==0:
    a=a/2
  cnt=cnt+1
print(cnt)