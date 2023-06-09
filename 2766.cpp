#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    for(int i=0;i<10;i++) {
        string frase;
        cin >> frase;

        if(i == 2 or i == 6 or i == 8)
            cout << frase << endl;;
    }
    return 0;
}
