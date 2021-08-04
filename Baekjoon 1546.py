L = int(input())
N = list(map(int, input().split()))
print(sum(N) / L * 100 / max(N))
