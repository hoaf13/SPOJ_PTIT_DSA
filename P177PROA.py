import math
x = [int(i) for i in input().split()]
 
dist = math.sqrt( (x[3] - x[1])*(x[3] - x[1]) + (x[4] - x[2])*(x[4] - x[2]) )
 
res = int(dist/(2*x[0]))
 
if dist != int(dist):
    res+=1
 
print(res)
 
 
 
 
 
