#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int Ld, Cd, Lv, Cv;
    cin >> Ld >> Cd >> Lv >> Cv;

    long long int max_area = max((long long)pow(min(Ld, Cd), 2), (long long)pow(min(Lv, Cv), 2));

    max_area = max(max_area, (long long)pow(min(Ld+Cv, min(Cd, Lv)), 2));
    max_area = max(max_area, (long long)pow(min(Ld+Lv, min(Cd, Cv)), 2));
    max_area = max(max_area, (long long)pow(min(Cd+Lv, min(Ld, Cv)), 2));
    max_area = max(max_area, (long long)pow(min(Cd+Cv, min(Ld, Lv)), 2));

    cout << max_area << endl;

    return 0;
}
