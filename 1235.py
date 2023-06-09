for teste in range(int(input())):
	cifra = str(input())

	meio = len(cifra) // 2
	final = len(cifra)

	print(cifra[meio-1::-1] + cifra[:meio-1:-1])
