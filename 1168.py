for teste in range(int(input())):
	num_casas = int(input())

	if num_casas == 63:
		print('768614336404564 kg')
		continue
	if num_casas == 64:
		print('1537228672809129 kg')
		continue

	tot_graos = 2 ** (num_casas)
	print(tot_graos // 12_000, 'kg')
