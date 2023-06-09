digito_falho, valor_negociado = str(input()).split()

while digito_falho != '0' or valor_negociado != '0':
	valor_negociado = valor_negociado.replace(digito_falho, '')

	if valor_negociado == '':
		print(0)
	else:
		print(int(valor_negociado))

	digito_falho, valor_negociado = str(input()).split()
