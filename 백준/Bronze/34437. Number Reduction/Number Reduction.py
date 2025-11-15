import sys

def func():
    N = int(input())
    
    res = 0
    while N > 1:  # 1이 될때까지 반복
        if N % 2 == 0:  # 짝수면 반으로 나누기
            N //= 2
        else:
            N = 3 * N + 1  # 홀수면 2배에 1을 더한만큼 더하기
        res += 1  # 단계 증가
    print(res)
func()