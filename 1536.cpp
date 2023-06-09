#include <iostream>

using namespace std;

class Time {
public:
    int pontos=0, saldo=0, gols_fora=0, gols_pro=0, gols_contra=0;

    int get_saldo() {
        return gols_pro - gols_contra;
    }
};

int main() {
    int num_testes, gols_time1, gols_time2;
    char versus;
    cin >> num_testes;

    for(int n_teste=0;n_teste<num_testes;++n_teste) {
        Time time1, time2;
        cin >> gols_time1 >> versus >> gols_time2;

        time1.gols_pro = gols_time1;
        time1.gols_contra = gols_time2;
        if(gols_time1 > gols_time2)
            time1.pontos += 3;
        else if(gols_time1 == gols_time2)
            time1.pontos += 1;

        time2.gols_pro = gols_time2;
        time2.gols_contra = gols_time1;
        time2.gols_fora += gols_time2;
        if(gols_time2 > gols_time1)
            time2.pontos += 3;
        else if(gols_time1 == gols_time2)
            time2.pontos += 1;

        cin >> gols_time2 >> versus >> gols_time1;

        time1.gols_pro += gols_time1;
        time1.gols_contra += gols_time2;
        time1.gols_fora += gols_time1;
        if(gols_time1 > gols_time2)
            time1.pontos += 3;
        else if(gols_time1 == gols_time2)
            time1.pontos += 1;

        time2.gols_pro += gols_time2;
        time2.gols_contra += gols_time1;
        if(gols_time2 > gols_time1)
            time2.pontos += 3;
        else if(gols_time1 == gols_time2)
            time2.pontos += 1;

        if(time1.pontos > time2.pontos) {
            cout << "Time 1" << endl;
        } else if(time2.pontos > time1.pontos) {
            cout << "Time 2" << endl;
        } else {
            if(time1.get_saldo() > time2.get_saldo()) {
                cout << "Time 1" << endl;
            } else if(time2.get_saldo() > time1.get_saldo()) {
                cout << "Time 2" << endl;
            } else {
                if(time1.gols_fora > time2.gols_fora) {
                    cout << "Time 1" << endl;
                } else if(time2.gols_fora > time1.gols_fora) {
                    cout << "Time 2" << endl;
                } else {
                    cout << "Penaltis" << endl;
                }
            }
        }
    }

    return 0;
}
