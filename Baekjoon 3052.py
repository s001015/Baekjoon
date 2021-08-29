N = []
for i in range(10):
    A = int(input())
    N.append(A % 42)
N = set(N)
print(len(N))
