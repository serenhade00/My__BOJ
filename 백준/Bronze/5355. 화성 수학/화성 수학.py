T = int(input())

for i in range(T):
    A = list(map(str, input().split()))
    answer = float(A[0])
    for j in range(1, len(A)):
        if A[j] == '@':
             answer *= 3
        elif A[j] == '%':
            answer += 5
        elif A[j] == '#':
            answer -= 7
    print(format(answer,'.2f'))