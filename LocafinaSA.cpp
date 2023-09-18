#include <iostream>
#include <string>
#include <vector>


using namespace std;

struct Cliente{
    string CPF;
    string Nome;
    string DtNascimento;
    string CNH;
};

struct Veiculo{
    string Renavan;
    string Placa_do_Veiculo;
    string Data_Retirada;
    string Hora_Retirada;
    string Data_Entrega;
    string Hora_Entrega;
    string Loja_Retirada;
};

void incluircliente (vector<Cliente>&cliente){
    Cliente Novocliente;
    cout << "Por favor, informe o nome do cliente: " << endl;
    cin.ignore();
    getline (cin, Novocliente.Nome);
    
    cout << "Por favor, informe o CPF: " << endl;
    cin >> Novocliente.CPF;
    cout << "Por favor, informe a data de nascimento (DD/MM/AAA): " << endl;
    cin >> Novocliente.DtNascimento;
    cout << "Por favor, informe a CNH do cliente: " << endl;
    cin >> Novocliente.CNH;
    cout << "Cliente cadastrado!" << endl;;

    cliente.push_back(Novocliente);

}

int menu(){
    vector <Cliente> cliente;
    int opcao;
    cout << "Olá, seja bem vindo! Selecione uma das opçoes abaixo: " << endl;
    cout << "Opção 1: Incluir " << endl;
    cout << "Opção 2: Excluir " << endl;
    cout << "Opção 3: Alterar(Apenas por placa) " << endl;
    cout << "Opção 4: Listar " << endl;
    cout << "Opção 5: Localizar(Por placa) " << endl;
    cout << "Opção 0: Sair " << endl;
    cin >> opcao;
        switch (opcao){
        case 1:
        cout << "Opção escolhida: Incluir" << endl;
        incluircliente(cliente);
        
        break;
        case 2: 
        cout << "Opção escolhida: Excluir" << endl;
        break;
        case 3: 
        cout << "Opção escolhida: Alterar" << endl;
        break;
        case 4:
        cout << "Opção escolhida: Listar" << endl;
        break;
        case 5: 
        cout << "Opção escolhida: Localizar" << endl;
        case 0:
        break;
        default: 
        cout << "Opção inválida!" << endl;
        break;
        
    }
    return opcao;
}




int main(){

    menu();



    return 0;
}
