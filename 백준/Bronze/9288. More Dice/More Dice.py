for i in range(int(input())):
    print(f'Case {i+1}:')
    num = int(input())
    search =[]
    for x in range(1,7):
        for y in range(1,7):
            if x+y==num and search.count(x*10+y)==0 and search.count(y*10+x)==0:
                search.append(x*10+y)
                print(f'({x},{y})')