from sys import stdin

def func():
    input = stdin.readline

    N, K = map(int, input().split())

    res = [[], [], []]  
    boxes = [K, K, K] 
    for toy in input().rstrip():
        idx = 0  
        if toy == 'r': 
            idx = 1
        elif toy == 'p':  
            idx = 2

        while boxes[idx] == 0:
            idx = (idx + 1) % 3

        res[idx].append(toy) 
        boxes[idx] -= 1  

    print(''.join(res[0]))
    print(''.join(res[1]))
    print(''.join(res[2]))

func()