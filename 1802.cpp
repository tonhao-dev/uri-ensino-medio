#include <iostream>
#include <vector>
#include <algorithm>

bool comp(int a, int b) {return (a > b);}

using namespace std;

int main(int argc, char* argv[]) {
    vector<int> livros[5];

    for(int i=0;i<5;++i) {
        int num_livros;
        cin >> num_livros;

        for(int n_livro=0;n_livro<num_livros;n_livro++) {
            cin >> livros[i][n_livro];
        }
    }
    return 0;
}
