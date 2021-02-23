s = input()
 
res = 1
val = 10
a = {'A':0, 'B':0, 'C':0, 'D':0, 'E':0, 'F':0, 'G':0, 'H':0, 'I':0, 'J':0}
 
if s[0] == '?':
    res *= 9
if s[0] >= 'A' and s[0] <= 'J':
    res *= 9
    a[s[0]] += 1
    val -= 1
for i in range(1,len(s)):
    if s[i] == '?':
        res *= 10
    if s[i] >= 'A' and s[i] <= 'J' and a[s[i]] == 0:
        res *= val
        a[s[i]] += 1
        val -= 1
print(res) 
