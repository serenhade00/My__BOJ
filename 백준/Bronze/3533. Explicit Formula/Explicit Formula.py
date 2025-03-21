from itertools import combinations
lst = list(map(int, input().split()))
first = True
for i in combinations(lst, 2) :
    if first :
        result = i[0] or i[1]
        first = False
    else :
        tmp = (i[0] or i[1])
        if result == tmp : result = False
        else : result = True
for i in combinations(lst, 3) :
    tmp = i[0] or i[1] or i[2]
    if result == tmp : result = False
    else : result = True
if result : print(1);
else : print(0)