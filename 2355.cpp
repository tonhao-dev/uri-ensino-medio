#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
    const double TAXA_GOLS_ALEMANHA = (7.0 / 90.0);
    const double TAXA_GOLS_BRASIL = (1.0 / 90.0);

    double tempo_decorrido;
    cin >> tempo_decorrido;

    while(tempo_decorrido != 0) {
        // Tomar cuidado com x maiusculo e x minusculo, use x minusculo!

        cout << "Brasil " << (int)floor(tempo_decorrido * TAXA_GOLS_BRASIL) << " x "
        << "Alemanha " << (int)ceil(tempo_decorrido * TAXA_GOLS_ALEMANHA) << endl;

        cin >> tempo_decorrido;
    }

    return 0;
}
