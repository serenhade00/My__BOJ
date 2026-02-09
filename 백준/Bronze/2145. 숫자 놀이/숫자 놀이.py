def solve(num: str) -> str:  
    while True:              
        tmp = str(sum([int(x) for x in num]))  
        if len(tmp) == 1:    
            break        
        else:               
            num = tmp        
    return tmp              

if __name__ == '__main__':  
    while True:             
        num = input()     
        if num == '0':     
            break
        print(solve(num))  