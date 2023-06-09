#include <iostream>
#include <string>

using namespace std;

class Retangulo {
public:
	int x1, y1, x2, y2;

	string to_str() {
		return to_string(x1) + " " + to_string(y1) + " " + to_string(x2) + " " + to_string(y2);
	}
};

bool existe_intersecao(Retangulo ret1, Retangulo ret2) {
	if(ret2.x1 > ret1.x1)
        return existe_intersecao(ret2, ret1);

	return (ret1.x2 >= ret2.x1 and ret2.y1 >= ret1.y2);
}

Retangulo intersecao(Retangulo ret1, Retangulo ret2) {
	Retangulo answer;

	answer.x1 = max(ret1.x1, ret2.x1);
	answer.x2 = min(ret1.x2, ret2.x2);
	answer.y1 = min(ret1.y1, ret2.y1);
	answer.y2 = max(ret1.y2, ret2.y2);

	return answer;
}

int main() {
	int num_retangulos, n_teste=1;
	cin >> num_retangulos;

	Retangulo anterior, agora;

	while(num_retangulos != 0) {
		bool not_intersecao = false;

		for(int i=0;i<num_retangulos;i++) {
			cin >> agora.x1 >> agora.y1 >> agora.x2 >> agora.y2;

			if(i != 0) {
				if(existe_intersecao(anterior, agora) and !not_intersecao) {
					anterior = intersecao(anterior, agora);
				} else if(!not_intersecao) {
					cout << "Teste " << n_teste << endl;
					cout << "nenhum" << endl;
					cout << endl;
					not_intersecao = true;
				}
			} else {
				anterior.x1 = agora.x1;
				anterior.x2 = agora.x2;
				anterior.y1 = agora.y1;
				anterior.y2 = agora.y2;
			}
		}

		if(!not_intersecao) {
			cout << "Teste " << n_teste << endl;
			cout << anterior.to_str() << endl;
			cout << endl;
		}

		n_teste++;
		cin >> num_retangulos;
	}
	return 0;
}
