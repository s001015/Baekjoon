N = int(input())
L = 2
while True:
    if N == 1 or N == 2:
        print(N)
        break
    L *= 2
    if L >= N:
        print((N - (L // 2)) * 2)
        break
