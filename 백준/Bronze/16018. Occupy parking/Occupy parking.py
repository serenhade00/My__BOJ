N = int(input())

yesterday_parking_lot = input()
today_parking_lot = input()

count = 0

for yesterday, today in zip(yesterday_parking_lot, today_parking_lot):
    if yesterday == today == 'C':
        count += 1

print(count)