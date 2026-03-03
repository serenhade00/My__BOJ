def is_palindrome(a):
    return str(a == a[::-1]).lower()
    
print(is_palindrome(input()))