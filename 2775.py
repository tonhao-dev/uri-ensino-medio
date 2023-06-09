class Pacote(object):
    def __init__(self, numero):
        self.numero = numero

    def set_tempo_troca(self, tempo_troca):
        self.tempo_troca = tempo_troca

    def __lt__(self, other):
        return self.numero > other.numero

    def mostrar(self, indice):
        print("PACOTE " + str(indice))
        print("  Numero: " + str(self.numero))
        print("  Tempo de troca: " + str(self.tempo_troca))


while True:
    try:
        qtd_pacotes = int(input())

        pacotes = [Pacote(int(n)) for n in str(input()).split()]
        tempos_troca = str(input()).split()

        for i in range(qtd_pacotes):
            pacotes[i].set_tempo_troca(int(tempos_troca[i]))

        soma = 0
        for i in range(0, qtd_pacotes):
            trocou = False
            for j in range(0, qtd_pacotes-1):
                if pacotes[j].__lt__(pacotes[j+1]):
                    pacotes[j], pacotes[j+1] = pacotes[j+1], pacotes[j]
                    soma = soma + pacotes[j].tempo_troca + pacotes[j+1].tempo_troca
                    trocou = True

            if not trocou:
                break

        print(soma)

    except EOFError:
        break
