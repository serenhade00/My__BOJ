K = int(input())
S = input()

scytale_text = S[0]

for i, s in enumerate(S[1:], 1):

    if i % K == 0:
        scytale_text += s

print(scytale_text)