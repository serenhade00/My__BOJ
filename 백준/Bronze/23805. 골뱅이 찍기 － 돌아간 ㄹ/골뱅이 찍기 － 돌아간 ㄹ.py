def print1(n):
    for i in range(n):
        print('@'*n*3+' '*n+'@'*n)
def print2(n):
    for i in range(n*3):
        print('@'*n+' '*n+'@'*n+' '*n+'@'*n)
def print3(n):
    for i in range(n):
        print('@'*n+' '*n+'@'*n*3)
n=int(input())
print1(n)
print2(n)
print3(n)