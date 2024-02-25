from decimal import *
getcontext().prec = 100
a,b,c=map(Decimal,input().split())
print(a*b/c)