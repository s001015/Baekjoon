A = list(map(int,input().split()))
N = 0
for i in A:
    N += i ** 2
print(N % 10)
