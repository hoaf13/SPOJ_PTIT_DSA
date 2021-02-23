n,k = input().split()
n,k = int(n) , int(k)
res = 0
a = []
for i in range(n):
    b = [int(x) for x in input().split()]
    a.append(b)
for i in a:
    res += i[1] - i[0] + 1
# print(res)
tmp = int(res / k) + 1
res = (k * tmp) - res
res %= k
 
print(res) 
