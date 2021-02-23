def process():
    n = int(input())
    s = input()
    index = s.find('*')
    s_start = s[:index] 
    s_end = s[index+1:]
    for i in range(n):
        x = input()
        if x.startswith(s_start) and x.endswith(s_end):
            print('DA')
        else:
            print('NE')
        
 
if __name__ == '__main__':
    process() 
