N = int(input())
max_T, min_B = 1, 5000

for _ in range(N):
    T, B = map(int, input().split())
    max_T = max(max_T, T)
    min_B = min(min_B, B)

print((max_T * min_B) % 7 + 1)