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

int main(){
    vector<Cliente> clientes;
    int opcao;

    while (true) {
        cout << "Menu de Opções: " << endl;
        cout << "1. Incluir" << endl;
        cout << "2. Excluir" << endl;
        cout << "3. Alterar" << endl;
        cout << "4. Listar" << endl;
        cout << "5. Localizar" << endl;
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
            case 3: 
                AlterarCliente (clientes);
                break;
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