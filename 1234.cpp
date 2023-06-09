#include <iostream>
#define MAIUSCULA 0
#define MINUSCULA 1

using namespace std;

int main() {
    string sequencia;
    while(getline(cin, sequencia)) {
        int anterior = MINUSCULA;
        string dancante;

        for(auto letra:sequencia) {
            if(isalpha(letra)) {
                if(anterior == MINUSCULA) {
                    dancante += toupper(letra);
                    anterior = MAIUSCULA;
                } else {
                    dancante += tolower(letra);
                    anterior = MINUSCULA;
                }
            } else {
                dancante += letra;
            }
        }

        cout << dancante << endl;
    }

    return 0;
}
