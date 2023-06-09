from sys import stdin, stdout

for line in stdin:
	texto = list(line)

	i_aberto = True
	b_aberto = True

	for i in range(len(texto)):
		if texto[i] == '_':
			if i_aberto:
				texto[i] = '<i>'
				i_aberto = False
			else:
				texto[i] = '</i>'
				i_aberto = True
		elif texto[i] == '*':
			if b_aberto:
				texto[i] = '<b>'
				b_aberto = False
			else:
				texto[i] = '</b>'
				b_aberto = True

	stdout.write(''.join(texto))
