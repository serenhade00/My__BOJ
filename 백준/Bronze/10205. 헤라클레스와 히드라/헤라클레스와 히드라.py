k=int(input().strip())
for i in range(1,k+1):
    h=int(input().strip())
    a=input().strip()
    print("Data Set {}:".format(i))
    print(h+a.count("c")-a.count("b"))
    if i!=k:print()
