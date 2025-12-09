import sys

def func():
    numbers = list(map(int, input().split()))
    print(numbers[-1] % 10 if numbers[-1] % 10 != 0 else 10)
func()