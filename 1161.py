from math import factorial

while True:
	try:
		m, n = [int(i) for i in str(input()).split()]

		print(factorial(m) + factorial(n))
	except EOFError:
		break
		