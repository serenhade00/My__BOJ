N = input()
num = int(N)

flag = 0
if '7' in N:
    flag = 1

if flag == 0 and num % 7 != 0:
    print(0)
elif flag == 0 and num % 7 == 0:
    print(1)
elif flag == 1 and num % 7 != 0:
    print(2)
elif flag == 1 and num % 7 == 0:
    print(3)
else:
    print("Not integer!")