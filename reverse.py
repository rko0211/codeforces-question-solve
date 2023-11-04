def solve():
    n = int(input())
    a = list(map(int, input().split()))
    j = -1
    ele = None
    for i in range(n):
        if a[i] != (i+1):
            j = i
            ele = (i+1)
            break
    k = -1
    for i in range(j, n):
        if a[i] == ele:
            k = i
            break
    if j != -1:
        for i in range(j):
            print(a[i], end=" ")
        for i in range(k, j-1, -1):
            print(a[i], end=" ")
        for i in range(k+1, n):
            print(a[i], end=" ")
    else:
        for i in range(n):
            print(a[i], end=" ")
    print()

t = int(input())
for _ in range(t):
    solve()
