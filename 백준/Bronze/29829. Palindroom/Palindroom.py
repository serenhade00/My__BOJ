line = input().split()
half = len(line) // 2
count = 0
for i in range(half):
    fi = i
    bi = -(i + 1)

    f_number = line[fi]
    b_number = line[bi]

    if f_number != b_number:
        count += 1

    if count == 1:
        line[bi] = f_number

    if count == 2:
        break
if 1 < count:
    print('EI')
else:
    palindrome = ' '.join(line)

    print('JAH')
    print(f'{palindrome}')