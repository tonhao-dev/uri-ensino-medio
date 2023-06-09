#include <iostream>

using namespace std;

int main() {
    string input;
    while(getline(cin, input)) {
        int num_aliteracoes=0;

        char anterior = input[0];
        char atual = '#';
        bool mudou = false;

        for(int i=0;i<input.size();++i) {
            if(input[i] == ' ') {
                if(atual == '#') {
                    atual = input[i+1];
                } else {
                    if(atual == anterior) {
                        mudou = false;
                        num_aliteracoes++;
                    }
                }
            }
        }
    }

    return 0;
}
