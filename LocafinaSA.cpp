#include <iostream>
#include <string> 
#include <vector>

using namespace std;

struct Cliente{
    string CPF;
    string nome;
    string dtNascimento;
    string CNH;
};
struct Veículo{
    string Renavan;
    string placaVeículo;
    string dtRetirada;
    string dtEntrega;
    int hrRetirada;
    int hrEntrega;
};

void IncluirCliente(vector<Cliente>& clientes){
    
    Cliente novoCliente;

    cout << "Informe o CPF do(a) cliente: " << endl;
    cin >> novoCliente.CPF;

    cout << "Informe o nome do(a) cliente: " << endl;
    cin.ignore();
    getline (cin, novoCliente.nome);

    cout << "Informe a data de nascimento do(a) cliente: " << endl;
    cin >> novoCliente.dtNascimento;

    cout << "Informe a CNH do(a) cliente: " << endl;
    cin >> novoCliente.CNH;

    clientes.push_back(novoCliente);
    cout << "Cliente cadastrado com sucesso" << endl;

}

void ExcluirCliente(vector<Cliente>& clientes) {

    string CPF;
    cout << "Informe o CPF do cliente a ser excluído: ";
    cin >> CPF;

    for (auto it = clientes.begin(); it != clientes.end(); ++it) {
        if (it->CPF == CPF) {
            it = clientes.erase(it);
            cout << "Cliente excluído com sucesso!" << endl;
            return;
        }
    }

    cout << "Cliente com CPF " << CPF << " não encontrado." << endl;
}

/*void AlterarCliente(vector<Cliente>& clientes, const string& CPF) {

    for (size_t i = 0; i < clientes.size(); ++i) {
        if (clientes[i].CPF == CPF) {
            cout << "Dados atuais do cliente:" << endl;
            cout << "CPF: " << clientes[i].CPF << endl;
            cout << "Nome: " << clientes[i].nome << endl;
            cout << "Data de Nascimento: " << clientes[i].dtNascimento << endl;
            cout << "CNH: " << clientes[i].CNH << endl;

            cout << "Deseja alterar o nome? (S/N): ";
            char opcao;
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Novo nome: ";
                cin.ignore();
                getline(cin, clientes[i].nome);
            }

            cout << "Deseja alterar a Data de Nascimento? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Nova Data de Nascimento: ";
                cin >> clientes[i].dtNascimento;
            }

            cout << "Deseja alterar a CNH? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Nova CNH: ";
                cin >> clientes[i].CNH;
            }

            cout << "Dados do cliente atualizados com sucesso!" << endl;
            return;
        }
    }
    cout << "Cliente com CPF " << CPF << " nao encontrado." << endl;
}*/

void ListarCliente (vector<Cliente>& clientes) {
    
    cout << "Lista de Clientes:" << endl;

    for (const auto& Cliente : clientes) {
        cout << "CPF: " << Cliente.CPF << endl;
        cout << "Nome: " << Cliente.nome << endl;
        cout << "Data Nascimento: " << Cliente.dtNascimento << endl;
        cout << "CNH: " << Cliente.CNH << endl;
        cout << "-----------------------------" << endl;
    }
}

void LocalizarCliente(const vector<Cliente>& clientes) {
    string CPF;
    cout << "Informe o CPF do cliente a ser localizado: ";
    cin >> CPF;

    for (const auto& Cliente : clientes) {
        if (Cliente.CPF == CPF) {
            cout << "Cliente encontrado:" << endl;
            cout << "CPF: " << Cliente.CPF << endl;
            cout << "Nome: " << Cliente.nome << endl;
            cout << "Data Nascimento: " << Cliente.dtNascimento << endl;
            cout << "CNH: " << Cliente.CNH << endl;
            return;
        }
    }

    cout << "Cliente com CPF " << CPF << " não encontrado." << endl;
}

int main(){
    vector<Cliente> clientes;
    int opcao;

    while (true) {
        cout << "Menu de Opções: " << endl;
        cout << "1. Incluir" << endl;
        cout << "2. Excluir" << endl;
        cout << "3. Alterar (apenas por CPF)" << endl;
        cout << "4. Listar" << endl;
        cout << "5. Localizar (apenas por CPF)" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                IncluirCliente (clientes);
                break;
            case 2: 
                ExcluirCliente (clientes);
                break;
            /*case 3: 
                AlterarCliente (clientes);
                break;*/
            case 4:
                ListarCliente (clientes);
                break;
            case 5:
                LocalizarCliente (clientes);
                break;
            case 0:
                cout << "Saindo do programa. Até logo!" << endl;
                return 0;
            default: 
                cout << "Opção Inválida. Tente Novamente." << endl;
            }     
        }

    return 0;
}