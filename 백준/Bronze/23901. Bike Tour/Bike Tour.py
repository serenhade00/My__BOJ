def count_peaks(heights):
    peaks = 0
    for i in range(1, len(heights) - 1):
        if heights[i - 1] < heights[i] > heights[i + 1]:
            peaks += 1

    return peaks

for t in range(1, int(input()) + 1):
    n = int(input())
    heights = list(map(int, input().split()))
    res = count_peaks(heights)

    print(f"Case #{t}: {res}")