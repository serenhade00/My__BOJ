k = int(input())
n = 2**k-1
res = n*(n+1)//2
print(bin(res)[2:])