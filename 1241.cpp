#include <iostream>

using namespace std;

int main() {
    int num_testes;
    cin >> num_testes;

    while(num_testes){
        string num1, num2;
        cin >> num1 >> num2;

        if(num2.size() > num1.size()) {
            cout << "nao encaixa" << endl;
            continue;
        }

        bool encaixa = true;
        for(int i=0;i<num2.size();++i) {
            if(num1[num1.size() - num2.size() + i] != num2[i]) {
                encaixa = false;
                break;
            }
        }

        if(encaixa) {
            cout << "encaixa" << endl;
        } else {
            cout << "nao encaixa" << endl;
        }

        --num_testes;
    }

    return 0;
}

