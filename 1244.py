for teste in range(int(input())):
	sequencia = str(input()).split()

	sequencia.sort(key=len, reverse=True)

	for i in range(len(sequencia)):
		if i == len(sequencia) - 1:
			print(sequencia[i])
		else:
			print(sequencia[i], end=' ')
