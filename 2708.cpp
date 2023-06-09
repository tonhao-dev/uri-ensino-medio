#include <iostream>
#include <string>

using namespace std;

int main() {
    string movimento_jipe;

    int qtd_turistas;
    int num_jipes=0, num_turistas=0;

    cin >> movimento_jipe;

    while(movimento_jipe != "ABEND") {
        cin >> qtd_turistas;

        if(movimento_jipe == "SALIDA") {
            num_jipes++;
            num_turistas += qtd_turistas;
        } else {
            num_jipes--;
            num_turistas -= qtd_turistas;
        }

        cin >> movimento_jipe;
    }

    cout << num_turistas << endl;
    cout << num_jipes << endl;

    return 0;
}
