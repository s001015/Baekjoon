D,H,W=map(int,input().split())
D = D ** 2
A = (H ** 2 + W ** 2)
B = (D / A)**0.5
print(int(B * H), int(B * W))
