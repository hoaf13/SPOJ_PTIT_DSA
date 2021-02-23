import math
 
n = int(input())
 
def analyse(n):
    for i in range(2,int(math.sqrt(n)+1)):
        if n % i == 0: 
            dem = 0
            while(n % i == 0):
                dem+=1
                n /= i
            print(int(i) , dem)
    if n != 1:
        print(int(n),1)
    return 
    
analyse(n) 
