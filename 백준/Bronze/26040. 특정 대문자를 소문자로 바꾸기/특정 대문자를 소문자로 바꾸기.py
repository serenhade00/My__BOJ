words = list(map(str, input()))
word = list(map(str, input().split()))

for i in range(len(word)):
    for j in range(len(words)):
        if word[i] == words[j]:
            words[j] = word[i].lower()

print(''.join(words))