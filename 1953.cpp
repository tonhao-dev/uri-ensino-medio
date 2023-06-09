#include <iostream>
#define EPR 0
#define EHD 1
#define INSTRUSOS 2

using namespace std;

int main(int argc, char* argv[]) {
    int num_alunos;

    while(cin >> num_alunos) {
        int num_alunos_curso[3] = {0}, num_matricula;
        string sigla_curso;

        for(int n_aluno=0;n_aluno<num_alunos;++n_aluno) {
            cin >> num_matricula >> sigla_curso;

            if(sigla_curso == "EPR")
                num_alunos_curso[EPR]++;
            else if(sigla_curso == "EHD")
                num_alunos_curso[EHD]++;
            else
                num_alunos_curso[INSTRUSOS]++;
        }

        cout << "EPR: " << num_alunos_curso[EPR] << endl;
        cout << "EHD: " << num_alunos_curso[EHD] << endl;
        cout << "INTRUSOS: " << num_alunos_curso[INSTRUSOS] << endl;
    }

    return 0;
}
