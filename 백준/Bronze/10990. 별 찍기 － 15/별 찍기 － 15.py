N = int(input())
print(" "*(N-1) + "*")
for i in range(2, N+1):
    print(" "*(N-i) + "*" + " "*(2*(i-2)+1) + "*")