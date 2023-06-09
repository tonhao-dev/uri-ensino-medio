#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << fixed;
    cout.precision(3);

    int num_testes;
    cin >> num_testes;

    while(num_testes) {
        int num_alunos, acima_media=0;
        cin >> num_alunos;

        vector<double> notas(num_alunos);
        double soma_notas=0;

        for(int i=0;i<num_alunos;++i) {
            cin >> notas[i];
            soma_notas += notas[i];
        }

        double media_turma = (double) soma_notas / num_alunos;
        for(auto nota_aluno:notas) {
            if(nota_aluno > media_turma)
                acima_media++;
        }

        cout << (double)acima_media / num_alunos * 100 << "%" << endl;

        --num_testes;
    }

    return 0;
}
