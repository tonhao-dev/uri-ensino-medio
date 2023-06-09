#include <iostream>

using namespace std;

int main() {
    int num_linhas, num_colunas, cont_pares=0;
    cin >> num_linhas >> num_colunas;

    if(num_linhas%2 == 0)
        cont_pares++;
    if(num_colunas%2 == 0)
        cont_pares++;

    if(cont_pares == 1)
        cout << 0 << endl;
    else
        cout << 1 << endl;

    return 0;
}
