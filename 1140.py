frase = str(input()).lower().split()

while frase != ['*']:
	letra = frase[0][0]
	isTautograma = True

	for palavra in frase:
		if letra != palavra[0]:
			isTautograma = False
			break

	print('Y') if isTautograma else print('N')

	frase = str(input()).lower().split()
