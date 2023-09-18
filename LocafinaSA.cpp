#include <iostream>
#include <string>


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

int menu(){
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
