import sys

input = sys.stdin.readline

T = int(input())

for _ in range(T):
    K, N = input().rstrip().split()
    K = int(K)
    decryption_text = ''.join([str((int(n) + K) % 10) for n in N])
    print(decryption_text)