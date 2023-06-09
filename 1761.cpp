#include <iostream>
#include <cmath>
#define PI 3.141592654

using namespace std;

int main() {
    cout << fixed;
    cout.precision(2);

    double angulo, distancia, altura_elfo;
    while(cin >> angulo >> distancia >> altura_elfo) {
        cout << 5 * ((tan(angulo * (PI / 180.0)) * distancia) + altura_elfo) << endl;
    }

    return 0;
}
