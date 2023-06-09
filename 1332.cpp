#include <iostream>

using namespace std;

int main() {
    // one two three
    int num_words;
    cin >> num_words;

    while(num_words) {
        string word;
        cin >> word;

        if(word.size() == 3) {
            if((word[1] == 'n' and word[2] == 'e') or (word[0] == 'o' and word[2] == 'e') or (word[0] == 'o' and word[1] == 'n')) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        } else {
            cout << 3 << endl;
        }

        num_words--;
    }

    return 0;
}
