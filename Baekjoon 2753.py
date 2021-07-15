year = int(input())
if (year%100!=0) and (year%4==0) or (year%400 ==0):
    print(1)
else:
    print(0)
