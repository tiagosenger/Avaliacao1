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

Cliente incluirCliente(vector<Cliente>& cliente) {
    Cliente novoCliente;
    string cpf, nomeCliente, data_nascimento, cnh;
    char opcao;
    
    do {
    cout << "Digite o seu nome : ";
    getline(cin, nomeCliente); 
    novoCliente.nome = nomeCliente;

    cout << "Digite o seu CPF: ";
    getline(cin, cpf);
    novoCliente.cpf = cpf;

    cout << "Digite a data de seu nascimento no formato dd/mm/yyyy: ";
    getline(cin, data_nascimento);
    novoCliente.DtNascimento = data_nascimento;

    cout << "Digite a sua CNH: ";
    getline(cin, cnh);
    novoCliente.cnh = cnh;

    cliente.push_back(novoCliente);
    cout << "Deseja adicionar um novo cliente? (s/n)";
    cin >> opcao;
    cin.ignore();

} while (opcao != 'n');

}


int main () {
    vector<Cliente> cliente;
    int opcao;
    cout << "Escolha uma opcao (de 1 a 5), ou 0 (zero) para sair";
    while(opcao != 0) {
        cin >> opcao;  
        cin.ignore(); 
        switch (opcao){
        case 1:
            cout << "Incluir um cliente: " << endl;
            incluirCliente(cliente);
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