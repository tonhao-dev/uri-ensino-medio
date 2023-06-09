#include <iostream>

using namespace std;

typedef struct {
    int largura, comprimento;
} tipo_placa;

int main(int argc, char* argv[]) {
    tipo_placa placa_empresa;
    int qtd_pedidos;

    while(cin >> placa_empresa.largura >> placa_empresa.comprimento >> qtd_pedidos) {
        for(int i=0;i<qtd_pedidos;++i) {
            tipo_placa placa_cliente;
            cin >> placa_cliente.largura >> placa_cliente.comprimento;

            string saida = "Nao";
            if(placa_cliente.largura <= placa_empresa.largura and placa_cliente.comprimento <= placa_empresa.comprimento)
                saida = "Sim";
            if(placa_cliente.comprimento <= placa_empresa.largura and placa_cliente.largura <= placa_empresa.comprimento)
                saida = "Sim";

            cout << saida << endl;
        }
    }

    return 0;
}
