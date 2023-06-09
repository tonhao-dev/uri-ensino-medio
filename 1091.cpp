#include <iostream>

using namespace std;

typedef struct {
    int x, y;
} tipo_ponto;

int main() {
    int num_consultas=1;
    cin >> num_consultas;

    while(num_consultas != 0) {
        tipo_ponto divisor;
        cin >> divisor.x >> divisor.y;

        for(int i=0;i<num_consultas;++i) {
            tipo_ponto casa;
            cin >> casa.x >> casa.y;

            if(casa.x == divisor.x or casa.y == divisor.y) {
                cout << "divisa" << endl;
            } else if(casa.x < divisor.x and casa.y > divisor.y) {
                cout << "NO" << endl;
            } else if(casa.x > divisor.x and casa.y > divisor.y) {
                cout << "NE" << endl;
            } else if(casa.x > divisor.x and casa.y < divisor.y) {
                cout << "SE" << endl;
            } else if(casa.x < divisor.x and casa.y < divisor.y) {
                cout << "SO" << endl;
            }
        }

        cin >> num_consultas;
    }

    return 0;
}
