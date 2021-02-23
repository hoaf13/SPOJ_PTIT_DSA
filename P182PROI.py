def Calz(n):
    ans = int(0)    
    while n:
        if (n&1) == 0:
            ans += 1
        n >>= 1
    return (1 << ans)
 
n = int(input())
print(Calz(n)) 
