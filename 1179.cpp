#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int num_testes;
    cin >> num_testes;

    for(int teste=0;teste<num_testes;teste++) {
        int num_provas;
        cin >> num_provas;

        int maior_nota=-1, nota_prova_atual;
        int length_maior_sequencia=0, length_sequencia_atual=0;
        bool sequencia_encerrou = false;

        for(int n_prova=0;n_prova<num_provas;n_prova++) {
            cin >> nota_prova_atual;

            if(nota_prova_atual > maior_nota) {
                maior_nota = nota_prova_atual;
                length_sequencia_atual = 1;
                length_maior_sequencia = 1;
            }else if(nota_prova_atual == maior_nota and sequencia_encerrou) {
                length_sequencia_atual = 1;
                sequencia_encerrou = false;
            }else if(nota_prova_atual == maior_nota and !sequencia_encerrou) {
                length_sequencia_atual++;
            }
            if(nota_prova_atual < maior_nota or n_prova == num_provas - 1) {
                sequencia_encerrou = true;

                if(length_sequencia_atual > length_maior_sequencia)
                    length_maior_sequencia = length_sequencia_atual;
            }
        }

        cout << "Caso #" << (teste + 1) << ": " << length_maior_sequencia << endl;
    }

    return 0;
}
