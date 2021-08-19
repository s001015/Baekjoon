n = int(input('몇 층으로 쌓을건가요? : '))

for i in range(1, n+1):
    print(" "*(n-i), "*"*(2*i-1))
