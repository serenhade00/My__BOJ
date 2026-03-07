res = ""
easy_level = 5

for _ in range(int(input())):
    problem, level = input().split()
    if int(level) < easy_level:
        res = problem
        easy_level = int(level)
print(res)