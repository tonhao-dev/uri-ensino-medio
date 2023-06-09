while True:
	num_cartas = int(input())
	if num_cartas == 0: break

	pilha_cartas = list(range(num_cartas, 0, -1))
	descartes = []

	while len(pilha_cartas) > 1:
		descartes.append(pilha_cartas.pop())
		pilha_cartas.insert(0, pilha_cartas[-1])
		pilha_cartas.pop()

	print('Discarded cards: ', end='')
	for i in range(len(descartes)):
		if i == len(descartes) - 1:
			print(descartes[i])
		else:
			print(str(descartes[i]) + ', ', end='')

	print('Remaining card:', pilha_cartas[0])
