N = int(input())

for i in range(N):
    A, B, C, D, E, F, G, H = map(int, input().split())
    I = A + E
    J = B + F
    K = C + G
    L = D + H
    if I < 1:
        I = 1
    if J < 1:
        J = 1
    if K < 0:
        K = 0
    print((1*I)+(5*J)+(2*K)+(2*L))