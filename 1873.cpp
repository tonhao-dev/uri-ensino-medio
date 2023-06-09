#include <iostream>
#include <string>

using namespace std;

int main() {
    int num_testes;
    cin >> num_testes;

    while(num_testes) {
        string rajesh, sheldon;
        cin >> rajesh >> sheldon;

        if(rajesh == sheldon) {
            cout << "empate" << endl;
        } else {
            if(rajesh == "tesoura" and sheldon == "papel") {
                cout << "rajesh" << endl;
            }
            if(sheldon == "tesoura" and rajesh == "papel") {
                cout << "sheldon" << endl;
            }

            if(rajesh == "papel" and sheldon == "pedra") {
                cout << "rajesh" << endl;
            }
            if(sheldon == "papel" and rajesh == "pedra") {
                cout << "sheldon" << endl;
            }

            if(rajesh == "pedra" and sheldon == "lagarto") {
                cout << "rajesh" << endl;
            }
            if(sheldon == "pedra" and rajesh == "lagarto") {
                cout << "sheldon" << endl;
            }

            if(rajesh == "lagarto" and sheldon == "spock") {
                cout << "rajesh" << endl;
            }
            if(sheldon == "lagarto" and rajesh == "spock") {
                cout << "sheldon" << endl;
            }

            if(rajesh == "spock" and sheldon == "tesoura") {
                cout << "rajesh" << endl;
            }
            if(sheldon == "spock" and rajesh == "tesoura") {
                cout << "sheldon" << endl;
            }

            if(rajesh == "tesoura" and sheldon == "lagarto") {
                cout << "rajesh" << endl;
            }
            if(sheldon == "tesoura" and rajesh == "lagarto") {
                cout << "sheldon" << endl;
            }

            if(rajesh == "lagarto" and sheldon == "papel") {
                cout << "rajesh" << endl;
            }
            if(sheldon == "lagarto" and rajesh == "papel") {
                cout << "sheldon" << endl;
            }

            if(rajesh == "papel" and sheldon == "spock") {
                cout << "rajesh" << endl;
            }
            if(sheldon == "papel" and rajesh == "spock") {
                cout << "sheldon" << endl;
            }

            if(rajesh == "spock" and sheldon == "pedra") {
                cout << "rajesh" << endl;
            }
            if(sheldon == "spock" and rajesh == "pedra") {
                cout << "sheldon" << endl;
            }

            if(rajesh == "pedra" and sheldon == "tesoura") {
                cout << "rajesh" << endl;
            }
            if(sheldon == "pedra" and rajesh == "tesoura") {
                cout << "sheldon" << endl;
            }
        }

        --num_testes;
    }

    return 0;
}
