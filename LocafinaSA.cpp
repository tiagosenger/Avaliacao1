#include <iostream>
#include <string>
#include <vector>
#include <string.h>

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
void incluirveiculo (vector<Veiculo>&veiculo){
    Veiculo NovoVeiculo;
    cout << "Por favor, informe a Placa do Veiculo: " << endl;
    cin.ignore();
    getline (cin, NovoVeiculo.Placa_do_Veiculo);
    
    cout << "Por favor, informe o Renavan: " << endl;
    cin >> NovoVeiculo.Renavan;
    cout << "Por favor, informe a data de retirada (DD/MM/AAA): " << endl;
    cin >> NovoVeiculo.Data_Retirada;
    cout << "Por favor, informe a Hora de retirada: " << endl;
    cin >> NovoVeiculo.Hora_Retirada;
    cout << "Por favor, informe a data de entrega: " << endl;
    cin >> NovoVeiculo.Data_Entrega;
    cout << "Por favor, informe a Hora de entrega: " << endl;
    cin >> NovoVeiculo.Hora_Entrega;
    cout << "Por favor, informe a Loja de  retirada: " << endl;
    cin >> NovoVeiculo.Loja_Retirada;
    cout << "Veiculo cadastrado!" << endl;;

    veiculo.push_back(NovoVeiculo);

}

int excluircliente(vector<Cliente>&cliente){
    string CPFexcluir;
    cout << " Digite o CPF do cliente que deseja excluir: " << endl;
    cin >> CPFexcluir;
    for (auto it = cliente.begin(); it != cliente.end(); it++){   
        if (it->CPF == CPFexcluir){
            it = cliente.erase(it);
            cout << "Cliente excluido com sucesso!" << endl;
            return 1;
        }
    }
    return 1;
} 

int excluirveiculo(vector<Veiculo>&veiculo){
    string placa;
    cout << " Digite a Placa do veiculo que deseja excluir: " << endl;
    cin >> placa;
    for (auto it = veiculo.begin(); it != veiculo.end(); it++){   
        if (it->Placa_do_Veiculo == placa){
            it = veiculo.erase(it);
            cout << "Veiculo excluido com sucesso!" << endl;
            return 1;
        }
    }
    return 1;
} 

void alterarcliente (vector<Cliente>&cliente){
    string  cpf;
    cout << " Digite o CPF do cliente que deseja alterar os dados: " << endl;
    cin >>  cpf;
    int i=0;
    string op;
    for (auto it = cliente.begin(); it != cliente.end(); it++, i++){   
        if (it->CPF ==  cpf){
            cout << "Nome: " << cliente[i].Nome << " CPF: " << cliente[i].CPF << " Data de Nascimento: " << cliente[i].DtNascimento << " CNH: " << cliente[i].CNH << endl;
            cout << "Deseja alterar o nome do cliente? (s/n) " << endl;
            cin >> op;
            if (op == "s"){
                cout << "Digite o novo nome: " << endl;
                cin >> cliente[i].Nome;
            }
            cout << "Deseja alterar o CPF do cliente? (s/n) " << endl;
            cin >> op;
           if (op == "s"){
            cout << "Digite o novo CPF: " << endl;
            cin >> cliente[i].CPF;
           }
            cout << "Deseja alterar a Data de Nascimento do cliente? (s/n) " << endl;
            cin >> op;
           if (op == "s"){
            cout << "Digite a nova Data de Nascimento: " << endl;
            cin >> cliente[i].DtNascimento;
           }
             cout << "Deseja alterar a CNH do cliente? (s/n) " << endl;
            cin >> op;
           if (op == "s"){
            cout << "Digite a nova CNH: " << endl;
            cin >> cliente[i].CNH;
           }
        }
    }
}
void alterarveiculo (vector<Veiculo>&veiculo){
    string  placa;
    cout << " Digite a placa do veiculo que deseja alterar os dados: " << endl;
    cin >>  placa;
    int i=0;
    string op;
    for (auto it = veiculo.begin(); it != veiculo.end(); it++, i++){   
        if (it->Placa_do_Veiculo ==  placa){
            cout << "Placa: " << veiculo[i].Placa_do_Veiculo << " Renavan: " << veiculo[i].Renavan << " Data de retirada: " 
        << veiculo[i].Data_Retirada << " Hora de Retirada: " << veiculo[i].Hora_Retirada << " Data de entrega: " << veiculo[i].Data_Entrega << " Hora de entrega: "
        << veiculo[i].Hora_Entrega << " Loja de retirada: " << veiculo[i].Loja_Retirada << endl;   
            cout << "Deseja alterar a placa do veiculo? (s/n) " << endl;
            cin >> op;
            if (op == "s"){
                cout << "Digite a nova placa: " << endl;
                cin >> veiculo[i].Placa_do_Veiculo;
            }
            cout << "Deseja alterar o renavan do veiculo? (s/n) " << endl;
            cin >> op;
           if (op == "s"){
            cout << "Digite o novo renavan: " << endl;
            cin >> veiculo[i].Renavan;
           }
            cout << "Deseja alterar a Data de retirada do veiculo? (s/n) " << endl;
            cin >> op;
           if (op == "s"){
            cout << "Digite a nova Data de retirada: " << endl;
            cin >> veiculo[i].Data_Retirada;
           }
            cout << "Deseja alterar a hora de retirada do veiculo? (s/n) " << endl;
            cin >> op;
           if (op == "s"){
            cout << "Digite a nova hora: " << endl;
            cin >> veiculo[i].Hora_Retirada;
           }
            cout << "Deseja alterar a data de entrega do veiculo? (s/n) " << endl;
            cin >> op;
           if (op == "s"){
            cout << "Digite a nova data: " << endl;
            cin >> veiculo[i].Data_Entrega;
           }
            cout << "Deseja alterar a hora de entrega do veiculo? (s/n) " << endl;
            cin >> op;
           if (op == "s"){
            cout << "Digite a nova hora: " << endl;
            cin >> veiculo[i].Hora_Entrega;
           }
            cout << "Deseja alterar a loja de retirada do veiculo? (s/n) " << endl;
            cin >> op;
           if (op == "s"){
            cout << "Digite a nova loja: " << endl;
            cin >> veiculo[i].Loja_Retirada;
           }
                       
        }
    }
}


void localizarcliente (vector<Cliente>&cliente){
    string cpf;
    cout << " Digite o CPF do cliente que deseja localizar os dados: " << endl;
    cin >> cpf;
    int i=0;
    for (auto it = cliente.begin(); it != cliente.end(); it++, i++){   
        if (it->CPF == cpf){
             cout << "Nome: " << cliente[i].Nome << " CPF: " << cliente[i].CPF << " Data de Nascimento: " << cliente[i].DtNascimento << " CNH: " << cliente[i].CNH << endl;
        }
    }
}

void localizarveiculo (vector<Veiculo>&veiculo){
    string placa;
    cout << " Digite a placa do veiculo que deseja localizar os dados: " << endl;
    cin >> placa;
    int i=0;
    for (auto it = veiculo.begin(); it != veiculo.end(); it++, i++){   
        if (it->Placa_do_Veiculo == placa){
          cout << "Placa: " << veiculo[i].Placa_do_Veiculo << " Renavan: " << veiculo[i].Renavan << " Data de retirada: " 
        << veiculo[i].Data_Retirada << " Hora de Retirada: " << veiculo[i].Hora_Retirada << " Data de entrega: " << veiculo[i].Data_Entrega << " Hora de entrega: "
        << veiculo[i].Hora_Entrega << " Loja de retirada: " << veiculo[i].Loja_Retirada << endl;   
        }
    }
}

void listarcliente (vector<Cliente>&cliente){
    int i=0;
    for (auto it = cliente.begin(); it != cliente.end(); it++, i++){   
        cout << "Nome: " << cliente[i].Nome << " CPF: " << cliente[i].CPF << " Data de Nascimento: " << cliente[i].DtNascimento << " CNH: " << cliente[i].CNH << endl;   
    }
}

void listarveiculo (vector<Veiculo>&veiculo){
    int i=0;
    for (auto it = veiculo.begin(); it != veiculo.end(); it++, i++){   
        cout << "Placa: " << veiculo[i].Placa_do_Veiculo << " Renavan: " << veiculo[i].Renavan << " Data de retirada: " 
        << veiculo[i].Data_Retirada << " Hora de Retirada: " << veiculo[i].Hora_Retirada << " Data de entrega: " << veiculo[i].Data_Entrega << " Hora de entrega: "
        << veiculo[i].Hora_Entrega << " Loja de retirada: " << veiculo[i].Loja_Retirada << endl;   
    }
}
int menucliente(){
    vector <Cliente> cliente;
    int opcao;
    while(true){
        cout << "Olá, seja bem vindo! Selecione uma das opçoes abaixo: " << endl;
        cout << "Opção 1: Incluir Cliente " << endl;
        cout << "Opção 2: Excluir " << endl;
        cout << "Opção 3: Alterar(Apenas por CPF) " << endl;
        cout << "Opção 4: Listar " << endl;
        cout << "Opção 5: Localizar(Por CPF) " << endl;
        cout << "Opção 0: Sair " << endl;
        cin >> opcao;
            switch (opcao){
            case 1:
            cout << "Opção escolhida: Incluir" << endl;
            incluircliente(cliente);
            break;
            case 2: 
            cout << "Opção escolhida: Excluir" << endl;
            excluircliente(cliente);
            break;
            case 3: 
            cout << "Opção escolhida: Alterar" << endl;
            alterarcliente(cliente);
            break;
            case 4:
            cout << "Opção escolhida: Listar" << endl;
            listarcliente(cliente);
            break;
            case 5: 
            cout << "Opção escolhida: Localizar" << endl;
            localizarcliente(cliente);
            break;
            case 0:
            cout << "Tchau tchau!" << endl;
            return 0;
            break;
            default: 
            cout << "Opção inválida!" << endl;
            break;
    }
    }
    return opcao;
}
 int menuveiculos(){
     vector <Veiculo> veiculo;
    int opcao;
    while(true){
        cout << "Olá, seja bem vindo! Selecione uma das opçoes abaixo: " << endl;
        cout << "Opção 1: Incluir Veiculo " << endl;
        cout << "Opção 2: Excluir " << endl;
        cout << "Opção 3: Alterar(Apenas por PLACA) " << endl;
        cout << "Opção 4: Listar " << endl;
        cout << "Opção 5: Localizar(Por PLACA) " << endl;
        cout << "Opção 0: Sair " << endl;
        cin >> opcao;
            switch (opcao){
            case 1:
            cout << "Opção escolhida: Incluir" << endl;
            incluirveiculo(veiculo);
            break;
            case 2: 
            cout << "Opção escolhida: Excluir" << endl;
            excluirveiculo(veiculo);
            break;
            case 3: 
            cout << "Opção escolhida: Alterar" << endl;
            alterarveiculo(veiculo);
            break;
            case 4:
            cout << "Opção escolhida: Listar" << endl;
            listarveiculo(veiculo);
            break;
            case 5: 
            cout << "Opção escolhida: Localizar" << endl;
            localizarveiculo(veiculo);
            break;
            case 0:
            cout << "Tchau tchau!" << endl;
            return 0;
            break;
            default: 
            cout << "Opção inválida!" << endl;
            break;
    }
    }
    return opcao;
}


int main(){
    int op;
    while (true){
        cout << "Menu de modulos (Selecione uma das opções abaixo): " << endl;
        cout << "Opção 1: Clientes" << endl;
        cout << "Opção 2: Veiculos" << endl;
        cin >> op;
        switch (op){
        case 1:
        menucliente();
        break;
        case 2: 
        menuveiculos();
        break;
        default:
        cout << "Opção Inválida!!" << endl;
        break;
    }
    return 0;
}
}