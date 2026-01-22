n = int(input())
before = list(input())
after = list(input())

if n % 2 != 0:
    for i in range(len(before)):
        if before[i] == '1':
            before[i] = '0'
        else:
            before[i] = '1'

if ''.join(before) == ''.join(after):
    print('Deletion succeeded')
else:
    print('Deletion failed')