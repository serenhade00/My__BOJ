n =int(input())
m = n//2

for i in range(n):
    if (n%2==0):
        for j in range(m):
            if j == m -1 :
                print("* ")
            else :
                print("* ", end = "")

        for k in range(m):
            if k == m -1 :
                print(" *")
            else :
                print(" *", end = "")

    else:
        for j in range(m+1):
            if j == m:
                print("* ")
            else:
                print("* ", end = "")

        for k in range(m):
            if k == m-1:
                print(" *")
            else:
                print(" *", end ="")