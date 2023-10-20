n = 1
PI = 3.1415927

while True:
  d, spin, sec = map(float,input().split())
  hour = sec/3600
  if spin == 0:
    break
  else: 
    Miles = (d * PI * spin)/(5280 * 12) 
    MPH = Miles/hour
    print("Trip #%d: %.2f %.2f" %(n,Miles,MPH)) 
    n+=1