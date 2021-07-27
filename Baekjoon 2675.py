N = int(input())
for M in range(N):
    R, S = input().split()
    for M in S:
        print(M * int(R), end = '')
    print()
