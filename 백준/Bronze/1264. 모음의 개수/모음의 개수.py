sentence = input().lower()
while sentence != '#':
    print(sentence.count('a')+sentence.count('e')+sentence.count('o')+sentence.count('i')+sentence.count('u'))
    sentence = input().lower()