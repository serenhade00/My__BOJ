n = int(input())
i = 1
while n % i == 0 : i += 1
print(i, end = " ")
i = n
while n % i == 0 : i -= 1
print(i)