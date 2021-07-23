H, M = map(int, input().split())
if M < 45:
    H = (H + 23) % 24
M = (M + 15) % 60

print(H, M)
