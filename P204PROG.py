def test():
    n = int(input())
    a = [int(x) for x in input().split()]
    a = sorted(a, reverse=True)
    res = 0
    for i in range(0, a[0]):
        if i+1 <= a[i]:
            res = i+1
        else:
            break
    print(res)
 
t = int(input())
while t:
    t -= 1
    test() 
