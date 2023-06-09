#include <iostream>

using namespace std;

int main() {
    string input;
    while(getline(cin, input)) {
        int num_aliteracoes=0;

        char anterior = tolower(input[0]);
        char atual = '#';
        bool mudou = false;

        for(int i=0;i<input.size();++i) {
            if(input[i] == ' ') {
                atual = tolower(input[i+1]);
                if(atual == anterior and !mudou) {
                    mudou = true;
                    num_aliteracoes++;
                } else {
                    mudou = false;
                }
                anterior = atual;
            }
        }

        cout << num_aliteracoes << endl;
    }

    return 0;
}
