N = int(input())
F = N//5
N%=5
T = 0
while F>=0:
    if N%3 == 0:
        T = N//3
        N = N%3
        break
    F-=1
    N+=5
print((N==0) and (F+T) or -1)
