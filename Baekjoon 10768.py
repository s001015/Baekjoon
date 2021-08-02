L = int(input())
N = int(input())

if L == 2:
    if N == 18:
        print("Special")
    elif N < 18:
        print("Before")
    elif N > 18:
        print("After")
elif L == 1:
    print("Before")
elif L > 2:
    print("After")

