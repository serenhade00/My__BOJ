number_1, number_2, YYYY = map(int, input().split('/'))

if 13 <= number_1 and number_2 <= 12:
    print('EU')
elif number_1 <= 12 and 13 <= number_2:
    print('US')
else:
    print('either')