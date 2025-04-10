n = int(input())
nums = list(map(int, input().split()))
result = 0
for i in range(n):
    m = 3 if i % 2 == 1 else 2
    result += min(nums[i], 7) - m
print(result)