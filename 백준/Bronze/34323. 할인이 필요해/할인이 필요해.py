n, m, s = map(int, input().split())
sale_cost = s * (m + 1) * (100 - n) // 100
plus_cost = m * s
print(min(sale_cost, plus_cost))