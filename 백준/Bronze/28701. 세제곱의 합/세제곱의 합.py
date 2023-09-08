N = int(input())

result_1 = 0	
result_2 = 0

for i in range(1, N + 1):
    result_1 += i
    result_2 += i**3

print(result_1)
print(result_1**2)
print(result_2)