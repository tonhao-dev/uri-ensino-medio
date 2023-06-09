#include <iostream>

using namespace std;

int main (){
    int termo1, termo2, novotermo, n, x;
    cin >> n;

    termo1 = 1;
    termo2 = 1;

    if (n < 46){
        novotermo = termo1 + termo2;
        termo1 = termo2;
        termo2 = novotermo;
    }
    cout << novotermo << endl;
    return 0;
}

