import math
 
def isPrime(n):
    if n < 2: return "NO"
    for i in range(2,int(math.sqrt(n)+1)):
        if n % i == 0 : return "NO"
    return "YES"
 
n = int(input())
print(isPrime(n))
     
