N = int(input())
X = int(input())
coin_amount = N * (1 - X / 100)
Y = (N / coin_amount - 1) * 100
print(f"{Y:.6f}")