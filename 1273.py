num_teste = int(input())

while num_teste != 0:
	size_linha = 0
	lista_palavras = []

	for i in range(num_teste):
		palavra = str(input())
		size_linha = max(size_linha, len(palavra))

		lista_palavras.append(palavra)

	for i in range(num_teste):
		print(('{0:>' + str(size_linha) + '}').format(lista_palavras[i]))
	

	num_teste = int(input())
	if num_teste != 0: print()
