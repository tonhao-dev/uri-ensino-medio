#include <iostream>
#include <vector>

using namespace std;

vector<int> altura(231, 0);
int main() {
    int num_testes;
    scanf("%d", &num_testes);

    while(num_testes) {
        int num_pessoas;
        scanf("%d", &num_pessoas);

        for(int i=0;i<num_pessoas;++i) {
            int h;
            scanf("%d", &h);
            ++altura[h];
        }

        int num_mostrados = 0;
        for(int i=20;i<=230;++i) {
            while(altura[i] > 0) {
                if(num_mostrados == num_pessoas-1) {
                    printf("%d\n", i);
                    --altura[i];
                } else {
                    printf("%d ", i);
                    --altura[i];
                }
                ++num_mostrados;
            }
        }

        --num_testes;
    }

    return 0;
}
