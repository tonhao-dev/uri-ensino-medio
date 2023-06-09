#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Presente {
public:
	int id;
	int volume;
};

bool comp(Presente p1, Presente p2) {
	if(p1.volume > p2.volume)
		return true;
	else if(p1.volume < p2.volume)
		return false;

	return p1.id < p2.id;
}

int main() {
	int num_testes;
	scanf("%d", &num_testes);

	for(int n_teste=0;n_teste<num_testes;++n_teste) {
		int num_presentes, num_ganhos;
		scanf("%d %d", &num_presentes, &num_ganhos);

		vector<Presente> lista_presentes(num_presentes);
		for(int i=0;i<num_presentes;++i) {
			int id, altura, largura, comprimento;
			scanf("%d %d %d %d", &id, &altura, &largura, &comprimento);

			lista_presentes[i].id = id;
			lista_presentes[i].volume = (altura * largura * comprimento);
		}

		sort(lista_presentes.begin(), lista_presentes.end(), comp);
        vector<int> saida(num_ganhos);

        for(int i=0;i<num_ganhos;++i)
            saida[i] = lista_presentes[i].id;

        sort(saida.begin(), saida.end());

		for(int i=0;i<num_ganhos;++i) {
			if(i != num_ganhos - 1)
				printf("%d ", saida[i]);
			else
				printf("%d\n", saida[i]);
		}
	}

	return 0;
}
