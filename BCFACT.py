 
def giaithua(n):
    ans = 1
    for i in range(1,n+1):
        ans *= i
    return ans
 
 
while(True):
    n = int(input())
    if n == 0: break
    print(giaithua(n))
 
