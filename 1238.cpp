#include <iostream>

using namespace std;

int main() {
    int num_testes;
    cin >> num_testes;

    while(num_testes) {
        string str1, str2, juncao;
        cin >> str1 >> str2;

        int p1=0, p2=0;
        while(p1 != str1.size() and p2 != str2.size()) {
            juncao += str1[p1++];
            juncao += str2[p2++];
        }

        if(p1 == str1.size() and p2 < str2.size()) {
            juncao += str2.substr(p2, str2.size() - p2);
        }
        if(p2 == str2.size() and p1 < str1.size()) {
            juncao += str1.substr(p1, str1.size() - p1);
        }

        cout << juncao << endl;

        num_testes--;
    }

    return 0;
}
