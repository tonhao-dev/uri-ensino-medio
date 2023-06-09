#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Suspeito {
public:
    int grau_suspeito, id;
};

bool comp(Suspeito s1, Suspeito s2) {
    return s1.grau_suspeito > s2.grau_suspeito;
}

int main(int argc, char* argv[]) {
    int num_suspeitos;
    cin >> num_suspeitos;

    while(num_suspeitos != 0) {
        vector<Suspeito> lista_suspeitos(num_suspeitos);
        for(int i=0;i<num_suspeitos;++i) {
            cin >> lista_suspeitos[i].grau_suspeito;
            lista_suspeitos[i].id = i;
        }

        sort(lista_suspeitos.begin(), lista_suspeitos.end(), comp);

        cout << lista_suspeitos[1].id + 1 << endl;

        cin >> num_suspeitos;
    }
    return 0;
}
