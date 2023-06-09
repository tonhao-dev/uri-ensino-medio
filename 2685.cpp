#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int angulo;

    while(cin >> angulo) {
        if(angulo >= 0 and angulo < 90 or angulo == 360)
            cout << "Bom Dia!!" << endl;
        if(angulo >= 90 and angulo < 180)
            cout << "Boa Tarde!!" << endl;
        if(angulo >= 180 and angulo < 270)
            cout << "Boa Noite!!" << endl;
        if(angulo >= 270 and angulo < 360)
            cout << "De Madrugada!!" << endl;
    }

    return 0;
}
