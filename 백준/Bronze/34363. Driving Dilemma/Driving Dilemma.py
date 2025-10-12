import sys

def func():
    S = int(input())
    D = float(input())
    T = float(input())
    
    if S * 5280 * T / 3600 >= D:
        print("MADE IT")
    else:
        print("FAILED TEST")
func()