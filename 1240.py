for teste in range(int(input())):
	num1, num2 = str(input()).split()

	if len(num2) > len(num1):
		print('nao encaixa')
		continue

	if num1[len(num1) - len(num2)::] == num2:
		print('encaixa')
	else:
		print('nao encaixa')
