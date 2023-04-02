a = int(input())
for _ in range(a):
    num_dogs, food_per_dog, pound_per_food= map(float, input().split())
    total = num_dogs*food_per_dog*pound_per_food
    print('$%.2f' % total)
