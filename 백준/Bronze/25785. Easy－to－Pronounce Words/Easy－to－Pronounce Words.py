def solve(word):
    nouns =["a", "e", 'i', "o", "u"]
    answer = 1
    
    check_num = 1 if word[0] in nouns else 0
    
    for w in word[1:]:
        if w in nouns:
            check_num += 1
        else:
            check_num -= 1
            
        if check_num > 1 or check_num < 0:
            answer = 0
            break
            
    return answer

if __name__ == "__main__":
    word = input()
    
    print(solve(word=word))