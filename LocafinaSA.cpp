#include <iostream>
#include <vector>

using namespace std;

struct Cliente {
    string cpf;
    string nome;
    string DtNascimento;
    string cnh;
};

struct Veiculo {
    string renavam;
    string placa_veiculo;
    string dataRetirada; //prevista
    string horaRetirada; //prevista
    string DataEntrega;
    string horaEntrega;
    string loja_retirada;
};


int main () {
    int opcao;
    cout << "Escolha uma opcao (de 1 a 5), ou 0 (zero) para sair";
    while(opcao != 0) {
        cin >> opcao;
        switch (opcao){
        case 1:
            cout << "Incluir um cliente: " << endl;
            break;
        case 2:
            cout << "Excluir um cliente: " << endl;
            break;

        case 3:
            cout << "Alterar um cliente (CPF): " << endl;
            break;
        
        case 4:
            cout << "Listar clientes: " << endl;
            break;
        
        case 5:
            cout << "Localizar um cliente (Por CPF): " << endl;
            break;
        
        default:
            cout << "Programa finalizado";
            break;
        }
    }


    return 0;
}