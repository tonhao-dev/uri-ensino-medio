#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int num_pessoas, num_satisfeitas[2]={0};
    cin >> num_pessoas;

    for(int i=0;i<num_pessoas;++i) {
        bool opiniao;
        cin >> opiniao;

        if(opiniao == 0)
            num_satisfeitas[0]++;
        else
            num_satisfeitas[1]++;
    }

    if(num_satisfeitas[0] > num_satisfeitas[1])
        cout << "Y" << endl;
    else
        cout << "N" << endl;

    return 0;
}
