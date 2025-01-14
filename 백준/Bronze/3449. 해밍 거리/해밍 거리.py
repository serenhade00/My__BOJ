for _ in range(int(input())):
    n = input()
    m = input()
    r = 0
    for i in range(len(n)):
        if n[i] != m[i]:
            r += 1
    print(f"Hamming distance is {r}.")