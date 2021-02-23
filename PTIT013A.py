# Happy New Year 2020 !
def process():
    s = input()
    if s.endswith("86"):
        print(1)
    else:
        print(0)
 
t = int(input())
while t:
    t-=1
    process() 
