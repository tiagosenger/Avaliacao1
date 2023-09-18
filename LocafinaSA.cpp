#include <iostream>
#include <string> 

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

void() IncluirCliente (vector<Cliente>& clients){
    Cliente novoCliente;
    cout << "Informe o CPF do(a) cliente: " << endl;
    cin >> novoCliente.CPF;
    cout << "Informe o nome do(a) cliente: " << endl;
    cin.ignore();
    getline (cin, novoCliente.nome);
    cout << "Informe a data de nascimento do(a) cliente: " << endl;
    cin >> novoCliente.dtNascimento;
    cout<< "Informe a CNH do(a) cliente: " endl;
    cin >> novoCliente.CNH;
    clientes.push_back(novoCliente);
    cout >> "Cliente cadastrado com sucesso" << endl;
}

int main(){

    

    return 0;
}