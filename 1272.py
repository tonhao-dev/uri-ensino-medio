for teste in range(int(input())):
	frase = str(input()).strip().split()

	for palavra in frase:
		print(palavra[0], end='')
	print()
