N = int(input())
A = list(map(int, input().split()))
M = int(input())
B = list(map(int, input().split()))

score = 0

for a in A:
    score += a
    if score in B:
        score = 0
print(score)