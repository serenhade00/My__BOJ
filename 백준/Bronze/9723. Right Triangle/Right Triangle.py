for i in range(1, int(input()) + 1) :
    triangle = [i ** 2 for i in [*map(int, input().split())]]
    if max(triangle) == sum(triangle) - max(triangle) : print(f"Case #{i}: YES")
    else : print(f"Case #{i}: NO")