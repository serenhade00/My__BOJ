N, M = map(int, input().split())
schoolClass = [list(input()) for _ in range(N)]
z = list(map(list, zip(*schoolClass)))

result = 0
for i in range(len(z)):
    if z[i].count("X") == N:
        result = i + 1
        break

if result > 0:
    print(result)
else:
    print("ESCAPE FAILED")