#include <iostream>

using namespace std;

class Horario {
public:
    int horas;
    int minutos;
};

int diferenca(Horario &horario_inicial, Horario horario_final) {
    int tempo_corrido=0;
    while(horario_inicial.horas != horario_final.horas or horario_inicial.minutos != horario_final.minutos) {
        horario_inicial.minutos++;
        tempo_corrido++;

        if(horario_inicial.minutos == 59) {
            horario_inicial.minutos = 0;
            horario_inicial.horas++;

            if(horario_inicial.horas == 24) {
                horario_inicial.horas = 0;
            }
        }
    }
}

int main() {
    Horario now, despertador;

    cin >> now.horas >> now.minutos;
    cin >> despertador.horas >> despertador.minutos;

    while(now.horas != 0 or now.minutos != 0 or despertador.horas != 0 or despertador.minutos != 0) {
        cout << diferenca(now, despertador) << endl;

        cin >> now.horas >> now.minutos;
        cin >> despertador.horas >> despertador.minutos;
    }


    return 0;
}
