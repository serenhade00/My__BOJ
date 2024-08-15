P = [*map(int, input().split())]
C = [*map(int, input().split())]

one_price = sum(P) * C[0] / 100
P.sort(reverse=True)
if C[1] < C[2]:
    C[1], C[2] = C[2], C[1]
two_price = P[0] * (C[1]/100) + P[1] * (C[2]/100)

if one_price > two_price:
    print('one %.2f' % (round(one_price, 2)))
else:
    print('two %.2f' % (round(two_price, 2)))