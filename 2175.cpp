#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    double tempo_otavio, tempo_bruno, tempo_ian;
    cin >> tempo_otavio >> tempo_bruno >> tempo_ian;

    if(tempo_bruno < tempo_ian and tempo_bruno < tempo_otavio)
        cout << "Bruno" << endl;
    else if(tempo_ian < tempo_bruno and tempo_ian < tempo_otavio)
        cout << "Ian" << endl;
    else if(tempo_otavio < tempo_bruno and tempo_otavio < tempo_ian)
        cout << "Otavio" << endl;
    else
        cout << "Empate" << endl;

    return 0;
}
