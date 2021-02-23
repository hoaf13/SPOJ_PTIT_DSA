accural = ["{}"]
 
def preprocess():
    global accural
    for i in range(1,16):
        tmp = "{"
        for j in range(i):
            tmp += accural[j]
            if j != i-1:
                tmp += ","
        tmp += "}"
        accural.append(tmp)
    
def process():
    a = input() 
    b = input()
    x = 0 
    y = 0
    for i in range(16):
        if accural[i] == a: 
            x = i
        if accural[i] == b:
            y = i
    print(accural[x+y])
 
preprocess()
tests = int(input())
for test in range(tests):
    process() 
