n = int(input())
nums = list(map(int, input().split()))

for num in nums:
    total = 0
    for i in range(1, num):
        if num % i == 0:
            total += i
    if total == num:
        print("Perfect")
    elif total > num:
        print("Abundant")
    else:
        print("Deficient")