#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    string num;
    cin >> num;

    cout << num.substr(0, 3) << endl;
    cout << num.substr(4, 3) << endl;
    cout << num.substr(8, 3) << endl;
    cout << num.substr(12, 2) << endl;

    return 0;
}
