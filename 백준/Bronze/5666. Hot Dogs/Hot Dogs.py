while True:
    try:
        H, P = map(int, input().split())
        print("%.2f" % (H/P))
    except EOFError:
        break