#include <iostream>
#define BRACO_DIR 1
#define BRACO_ESQ 0

using namespace std;

int main(int argc, char* argv[]) {
    int peso_levantado[2], num_repeticoes=-1, num_casos=0;
    double media_geral=0;

    cin >> peso_levantado[BRACO_ESQ] >> peso_levantado[BRACO_DIR] >> num_repeticoes;

    while(num_repeticoes != 0) {
        double media_levantado = (peso_levantado[BRACO_ESQ] + peso_levantado[BRACO_DIR]) / 2.0;
        double media_rm = media_levantado * (1 + num_repeticoes / 30.0);

        num_casos++;
        media_geral += media_rm;

        if(media_rm > 60)
            cout << "AQUI E BODYBUILDER!!" << endl;
        else if(media_rm >= 40)
            cout << "Ta saindo da jaula o monstro!" << endl;
        else if(media_rm >= 14)
            cout << "Bora, hora do show! BIIR!" << endl;
        else if(media_rm >= 13)
            cout << "E 13" << endl;
        else if(media_rm >= 1)
            cout << "Nao vai da nao" << endl;

        cin >> peso_levantado[BRACO_ESQ] >> peso_levantado[BRACO_DIR] >> num_repeticoes;
    }

    if(media_geral >= 40)
        cout << "\nAqui nois constroi fibra rapaz! Nao e agua com musculo!" << endl;

    return 0;
}
