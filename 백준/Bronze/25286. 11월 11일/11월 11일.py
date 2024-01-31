import sys
T = int(input())
for _ in range(T):
    y,m = map(int,sys.stdin.readline().split())
    if(m==3):
        if((y%100!=0 and y%4==0) or y%400==0):
            print(y ,m-1 ,29)
        else:
            print(y, m-1 ,28)
    elif(m==5 or m==7 or m==10 or m==12):
        print(y, m-1 ,30)
    elif(m==1):
        print(y-1, 12, 31)
    else:
        print(y, m-1, 31)