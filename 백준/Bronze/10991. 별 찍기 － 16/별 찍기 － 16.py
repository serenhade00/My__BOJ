n=int(input())
for i in range(1,n+1):
    x=" "*(n-i)
    for j in range(i):
        x+="* "
    print(x)