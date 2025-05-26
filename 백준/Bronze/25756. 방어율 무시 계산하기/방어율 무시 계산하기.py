n=int(input())
a=list(map(int,input().split()))
v=0
for i in a:
    a=1-(v/100)
    b=1-(i/100)
    v=(1-(a*b))*100 
    print(v) 