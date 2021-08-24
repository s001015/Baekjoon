import sys

for N in sys.stdin:
    A, B = map(int, N.split())
    if A == 0 and B == 0:
        break
    print(A + B)
