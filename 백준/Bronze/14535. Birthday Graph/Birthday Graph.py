import sys

month_name_list = 'Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec'.split()
case_count = 1

while True:
    N = int(sys.stdin.readline())
    if N == 0:
        break
    month_count_list = [0] * 12
    
    for _ in range(N):
        dd, mm, yyyy = map(int, sys.stdin.readline().split())
        month_count_list[mm - 1] += 1
    print(f'Case #{case_count}:')

    for i, month_count in enumerate(month_count_list):
        print(month_name_list[i], ':', '*' * month_count, sep='')
    case_count += 1