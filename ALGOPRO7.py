 
n,k = input().split()
n = int(n)
k = int(k)
a = list(map(int,input().strip().split()))[:n] 
 
a.sort()
print(a[k]) 
