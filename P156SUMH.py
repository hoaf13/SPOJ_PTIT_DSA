n = int(input())
 
def process():
    cnt = 1
    for i in range(0,int(n/2)+1):
        for j in range (0,int((n-cnt)/2)):
            print("*",end = '')
        for j in range (0,cnt):
            print("D",end = '')
        for j in range (0,int((n-cnt)/2)):
            print("*",end = '')
        cnt += 2
        print("")
    cnt -= 4
    for i in range(0,int(n/2)):
        for j in range(0,int((n-cnt)/2)):
            print("*",end = '') 
        for j in range(0,cnt):
            print("D",end = '') 
        for j in range(0,int((n-cnt)/2)):
            print("*",end = '')
        cnt -= 2
        print("")           
    return
 
process() 
