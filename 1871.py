num1, num2 = [int(n) for n in str(input()).split()]

while num1 != 0:
	soma = num1 + num2

	print(str(soma).replace('0', ''))

	num1, num2 = [int(n) for n in str(input()).split()]
