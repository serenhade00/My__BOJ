from math import lcm

n, a, b = map(int, input().split())
ab_lcm = lcm(a, b)
fizzbuzz = n // ab_lcm
fizz = n // a - fizzbuzz
buzz = n // b - fizzbuzz
print(fizz, buzz, fizzbuzz)