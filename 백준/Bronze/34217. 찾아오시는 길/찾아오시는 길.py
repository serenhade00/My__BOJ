a, b = map(int, input().split())
c, d = map(int, input().split())
han = a + c
yon = b + d

if han < yon:
    print("Hanyang Univ.")
elif han == yon:
    print("Either")
else:
    print("Yongdap")