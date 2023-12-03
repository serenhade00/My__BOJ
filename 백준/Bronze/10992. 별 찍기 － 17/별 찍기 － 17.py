N = int(input())

print(" "*(N-1) + "*")

for i in range(2, N):
    print(" "*(N-i) + "*" + " "*(2*(i-2)+1) + "*")

if N > 1:
    print("*"*(2*N-1))