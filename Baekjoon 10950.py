import sys

N = int(sys.stdin.readline())

for i in range(N):
    print(sum(map(int, sys.stdin.readline().split())))
