def process():
	n = input()
	if n == "0" or n == "4" or n == "8":
		print(4)
		return 
	a = int(n[len(n) - 2])
	a *= 10
	a +=  int(n[len(n) - 1])
	res = 4 if a % 4 == 0 else 0
	print(res)
 
 
if __name__ == "__main__":
	t = int(input())
	while t:
		t -= 1
		process() 
