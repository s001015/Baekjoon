N, X = input().split()
A = list(input().split())
print(" ".join([i for i in A if int(i) < int(X)]))
