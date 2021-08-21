L, K = map(int, input().split())

N, M = L, K
while M != 0:
    N, M = M, N % M

print(N)
print(L * K // N)
