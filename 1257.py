num_testes = int(input())

for teste in range(num_testes):
	num_linhas = int(input())

	num_hash = 0
	for linha in range(num_linhas):
		sequencia = str(input())

		for i in range(len(sequencia)):
			num_hash += (ord(sequencia[i]) - ord('A')) + linha + i

	print(num_hash)
