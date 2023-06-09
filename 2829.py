num_palavras = int(input())

lista_palavras = []

for i in range(num_palavras):
    lista_palavras.append(str(input()))

lista_palavras.sort()

for palavra in lista_palavras:
    print(palavra)
