#include <iostream>

using namespace std;

int main() {
    int num_bandejas, num_latas, num_copos, num_quebrados=0;
    cin >> num_bandejas;

    while(num_bandejas) {
        cin >> num_latas >> num_copos;
        num_quebrados += (num_latas > num_copos) ? num_copos:0;
        num_bandejas--;
    }

    cout << num_quebrados << endl;

    return 0;
}
