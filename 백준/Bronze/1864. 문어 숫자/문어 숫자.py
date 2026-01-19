dct = {	
       '-':0,
       '\\':1,
       '(':2,
       '@':3,
       '?':4,
       '>':5,
       '&':6,
       '%':7,
       '/':-1
       }

while True: 
    a = input() 
    if a == '#':
        break	
    n = len(a)-1	
    sum = 0 
    for i in a:	
        sum+=dct[i]*(8**n)
        n-=1 
    print(sum)