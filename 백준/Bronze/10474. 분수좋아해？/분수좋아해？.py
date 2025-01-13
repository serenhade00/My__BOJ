while True :
  a, b = map(int, input().split())
  if a == 0 and b == 0 :
    break
  d = a // b
  print(f"{d} {a - (d*b)} / {b}")