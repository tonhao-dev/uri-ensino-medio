#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#define LESTE 0
#define NORTE 1
#define OESTE 2
#define SUL 3

using namespace std;

typedef struct {
    string nome;
    char regiao;
    int distancia;
} t_aluno;

bool comp(t_aluno aluno1, t_aluno aluno2) {
    if(aluno1.distancia < aluno2.distancia)
        return true;
    else if(aluno1.distancia > aluno2.distancia)
        return false;

    if(aluno1.regiao < aluno2.regiao)
        return true;
    else
        return false;

    return (strcoll(aluno1.nome.c_str(), aluno2.nome.c_str()) < 0);
}

int main(int argc, char* argv[]) {
    int num_alunos;
    while(cin >> num_alunos) {
        vector<t_aluno> lista_alunos(num_alunos);

        for(int i=0;i<num_alunos;++i) {
            cin >> lista_alunos[i].nome >> lista_alunos[i].regiao >> lista_alunos[i].distancia;
        }

        sort(lista_alunos.begin(), lista_alunos.end(), comp);

        for(auto aluno:lista_alunos) {
            cout << aluno.nome << endl;
        }
    }

    return 0;
}
