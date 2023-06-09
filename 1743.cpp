#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int conector1[5], input;
    char output = 'Y';

    cin >> conector1[0] >> conector1[1] >> conector1[2] >> conector1[3] >> conector1[4];
    for(int i=0;i<5;++i) {
        cin >> input;

        if(conector1[i] == input)
            output = 'N';
    }

    cout << output << endl;

    return 0;
}
