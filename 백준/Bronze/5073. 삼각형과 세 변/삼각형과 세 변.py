import sys

while True:
    S = list(map(int, sys.stdin.readline().split()))
    if sum(S) == 0:
        break
    S.sort()
    if sum(S[:2]) <= S[2]:
        print("Invalid")
    elif S[0] == S[2]:
        print("Equilateral")
    elif S[0] == S[1] or S[1] == S[2]:
        print("Isosceles")
    else:
        print("Scalene")