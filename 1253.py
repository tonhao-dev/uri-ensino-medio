CRIPTOGRAFAR = 1
DESCRIPTOGRAFAR = 2

def cifra(modo, mensagem, chave):
    mensagem_final = str()

    if modo == CRIPTOGRAFAR:
        for i in mensagem:
            if ord(i) in range(65, 91):
                codigo_letra = ord(i) + chave

                if codigo_letra > 90:
                    codigo_letra = codigo_letra - 26

            elif ord(i) in range(97, 123):
                codigo_letra = ord(i) + chave

                if codigo_letra > 122:
                    codigo_letra = codigo_letra - 26

            else:
                codigo_letra = ord(i)

            mensagem_final += chr(codigo_letra)
            
    else:
        for i in mensagem:
            if ord(i) in range(65, 91):
                codigo_letra = ord(i) - chave

                if codigo_letra < 65:
                    codigo_letra = codigo_letra + 26

            elif ord(i) in range(97, 123):
                codigo_letra = ord(i) - chave

                if codigo_letra < 97:
                    codigo_letra = codigo_letra + 26

            else:
                codigo_letra = ord(i)

            mensagem_final += chr(codigo_letra)

    return mensagem_final


for i in range(int(input())):
	mensagem = str(input())
	chave = int(input())
	print(cifra(DESCRIPTOGRAFAR, mensagem, chave))
