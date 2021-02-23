s = input()
cntUpperCase = 0
cntLowerCase = 0
for i in s:
    if i.isupper():
        cntUpperCase+=1
    else: 
        cntLowerCase+=1
if cntLowerCase >= cntUpperCase:
    print(s.lower())
else:
    print(s.upper()); 
