#include <iostream>
#include <string>

using namespace std;

class Peca {
public:
    int row;
    int column;
};

int main() {
    string entrada, saida = "INVALIDO";
    getline(cin, entrada);

    Peca cavalo;
    cavalo.row = entrada[0] - 'a';
    cavalo.column = entrada[1] - '0';

    Peca destino;
    destino.row = entrada[3] - 'a';
    destino.column = entrada[4] - '0';

    if(cavalo.row-1 == destino.row and cavalo.column-2 == destino.column)
        saida = "VALIDO";
    if(cavalo.row-2 == destino.row and cavalo.column-1 == destino.column)
        saida = "VALIDO";
    if(cavalo.row-2 == destino.row and cavalo.column+1 == destino.column)
        saida = "VALIDO";
    if(cavalo.row-1 == destino.row and cavalo.column+2 == destino.column)
        saida = "VALIDO";
    if(cavalo.row+1 == destino.row and cavalo.column+2 == destino.column)
        saida = "VALIDO";
    if(cavalo.row+2 == destino.row and cavalo.column+1 == destino.column)
        saida = "VALIDO";
    if(cavalo.row+2 == destino.row and cavalo.column-1 == destino.column)
        saida = "VALIDO";
    if(cavalo.row+1 == destino.row and cavalo.column-2 == destino.column)
        saida = "VALIDO";

    cout << saida << endl;

    return 0;
}
