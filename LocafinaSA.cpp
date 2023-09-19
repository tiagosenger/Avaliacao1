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
struct Veiculo{
    string Renavan;
    string placaVeiculo;
    string dtRetirada;
    string dtEntrega;
    string hrRetirada;
    string hrEntrega;
    string loja_Retirada;
};
//---------------------MÓDULO CLIENTES--------------------------// 
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
void ExcluirCliente(vector<Cliente>& clientes){

    string CPF;
    cout << "Informe o CPF do cliente a ser excluído: ";
    cin >> CPF;

    for (auto it = clientes.begin(); it != clientes.end(); ++it) {
        if (it->CPF == CPF) {
            it = clientes.erase(it);
            cout << "Cliente excluído com sucesso!" << endl;      
        }
    }

    cout << "Cliente com CPF " << CPF << " não encontrado." << endl;
}
void AlterarCliente(vector<Cliente>& clientes){
    
    string CPF;
    cout << "Informe o CPF do(a) cliente que deseja alterar dados: ";
    cin >> CPF;
    
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
}
void ListarCliente (const vector<Cliente>& clientes){
    if (clientes.empty()) {
        cout << "Nenhum cliente cadastrado." << endl;
        return;        
    }

    cout << "Lista de Clientes:" << endl;

    for (const auto& Cliente : clientes) {
        cout << "CPF: " << Cliente.CPF << endl;
        cout << "Nome: " << Cliente.nome << endl;
        cout << "Data Nascimento: " << Cliente.dtNascimento << endl;
        cout << "CNH: " << Cliente.CNH << endl;
        cout << "-----------------------------" << endl;
    }
}
void LocalizarCliente(const vector<Cliente>& clientes){
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
            cout << "-----------------------------" << endl;
            return;
        }
    }

    cout << "Cliente com CPF " << CPF << " não encontrado." << endl;
}
void MenuClientes(vector<Cliente>& clientes){
    int opcao;
    while (true) {
        cout << "Menu de Opções (Gestão de Clientes): " << endl;
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
                cout << "Voltando para o Menu Inicial" << endl;
                return;
            default: 
                cout << "Opção Inválida. Tente Novamente." << endl;
        }     
    }
}
//---------------------MÓDULO VEÍCULOS---------------------------//  
void IncluirVeiculo (vector<Veiculo>& veiculos){
    Veiculo novoVeiculo;
    cout << "Informe o RENAVAN do veículo: ";
    cin >> novoVeiculo.Renavan;
    cout << "Informe a placa do veículo: ";
    cin >> novoVeiculo.placaVeiculo;
    cout << "Informe a data de retirada do veículo: ";
    cin >> novoVeiculo.dtRetirada;
    cout << "Informe a data de entrega do veículo: ";
    cin >> novoVeiculo.dtEntrega;
    cout << "Informe a hora de retirada do veículo: ";
    cin >> novoVeiculo.hrRetirada;
    cout << "Informe a hora de entrega do veículo: ";
    cin >> novoVeiculo.hrEntrega;
    cout << "Informe a loja de retirada do veículo: ";
    cin >> novoVeiculo.loja_Retirada;
       veiculos.push_back(novoVeiculo);
    cout << "Veículo adicionado com sucesso!" << endl << endl;
    return;
}
void ExcluirVeiculo(vector<Veiculo>& veiculos){
    string placaVeiculo;
    cout << "Informe a placa do veículo que deseja excluir: ";
    cin >> placaVeiculo;
    
    for (size_t i = 0; i < veiculos.size(); ++i) {
        if (veiculos[i].placaVeiculo == placaVeiculo) {
            veiculos.erase(veiculos.begin() + i);
            cout << "Veículo com placa " << placaVeiculo << " excluído com sucesso." << endl << endl;
            return;
        }
    }
    cout << "Veículo com placa " << placaVeiculo << " não encontrado." << endl << endl;
}
void AlterarVeiculo(vector<Veiculo>& veiculos){
    string placaVeiculo;
    cout << "Informe a placa do veículo que deseja alterar: ";
    cin >> placaVeiculo;

    for (size_t i = 0; i < veiculos.size(); ++i) {
        if (veiculos[i].placaVeiculo == placaVeiculo) {
            cout << "Dados atuais do veículo:" << endl;
            cout << "Renavan: " << veiculos[i].Renavan << endl;
            cout << "Placa do Veículo: " << veiculos[i].placaVeiculo << endl;
            cout << "Data de Retirada: " << veiculos[i].dtRetirada << endl;
            cout << "Data de Entrega: " << veiculos[i].dtEntrega << endl;
            cout << "Hora de Retirada: " << veiculos[i].hrRetirada << endl;
            cout << "Hora de Entrega: " << veiculos[i].hrEntrega << endl;
            cout << "Loja de Retirada: " << veiculos[i].loja_Retirada << endl;

            cout << "Deseja alterar o Renavan? (S/N): ";
            char opcao;
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Novo Renavan: ";
                cin >> veiculos[i].Renavan;
            }

            cout << "Deseja alterar a Data de Retirada? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Nova Data de Retirada: ";
                cin >> veiculos[i].dtRetirada;
            }

            cout << "Deseja alterar a Data de Entrega? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Nova Data de Entrega: ";
                cin >> veiculos[i].dtEntrega;
            }

            cout << "Deseja alterar a Hora de Retirada? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Nova Hora de Retirada: ";
                cin >> veiculos[i].hrRetirada;
            }

            cout << "Deseja alterar a Hora de Entrega? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Nova Hora de Entrega: ";
                cin >> veiculos[i].hrEntrega;
            }

            cout << "Deseja alterar a Loja de Retirada? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao =='s') {
                cout << "Nova Loja de Retirada: ";
                cin >> veiculos[i].loja_Retirada;
            }

            cout << "Dados do veículo atualizados com sucesso!" << endl << endl;
            return;
        }
    }
    cout << "Veículo com placa " << placaVeiculo << " não encontrado." << endl << endl;
}
void ListarVeiculo(const vector<Veiculo>& veiculos){
    if (veiculos.empty()) {
        cout << "Nenhum veiculo cadastrado." << endl;
        return;        
    }
    
    cout << "Lista de Veiculos:" << endl;

    for (const auto& Veiculo : veiculos) {
        cout << "Placa do Veículo: " << Veiculo.placaVeiculo << endl;
        cout << "Renavan: " << Veiculo.Renavan << endl;
        cout << "Data Retirada: " << Veiculo.dtRetirada << " Hora Retirada: " << Veiculo.hrRetirada << endl;
        cout << "Data Entrega: " << Veiculo.dtEntrega << " Hora Entrega: " << Veiculo.hrEntrega << endl;
        cout << "Loja de Retirada: " << Veiculo.loja_Retirada << endl;
        cout << "--------------------------------------------------" << endl;
    }
}
void LocalizarVeiculo(const vector<Veiculo>& veiculos) {
    if (veiculos.empty()) {
        cout << "Nenhum veículo cadastrado." << endl;
        return;
    }

    string placaVeiculo;
    cout << "Informe a placa do veículo que deseja localizar: ";
    cin >> placaVeiculo;

    for (const Veiculo& veiculo : veiculos) {
        if (veiculo.placaVeiculo == placaVeiculo) {
            cout << "Veículo encontrado:" << endl;
            cout << "Renavan: " << veiculo.Renavan << endl;
            cout << "Placa do Veículo: " << veiculo.placaVeiculo << endl;
            cout << "Data de Retirada: " << veiculo.dtRetirada << endl;
            cout << "Hora de Retirada: " << veiculo.hrRetirada << endl;
            cout << "Data de Entrega: " << veiculo.dtEntrega << endl;
            cout << "Hora de Entrega: " << veiculo.hrEntrega << endl;
            cout << "Loja de Retirada: " << veiculo.loja_Retirada << endl << endl;
            return;
        }
    }

    cout << "Veículo com placa " << placaVeiculo << " não encontrado." << endl;
}
void MenuVeiculos(vector<Veiculo>& veiculos){
    int alternativa;
    while (true) {
        cout << "Menu de Opções (Gestão de Veículos):" << endl;
        cout << "1. Incluir Veículo" << endl;
        cout << "2. Excluir Veículo" << endl;
        cout << "3. Alterar Veículo" << endl;
        cout << "4. Listar Veículos" << endl;
        cout << "5. Localizar Veículo" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> alternativa;

        switch (alternativa) {
            case 1:
                IncluirVeiculo(veiculos);
                break;
            case 2:
                ExcluirVeiculo(veiculos);
                break;
            case 3:
                AlterarVeiculo(veiculos);
                break;
            case 4:
                ListarVeiculo(veiculos);
                break;
            case 5:
                LocalizarVeiculo(veiculos);
                break;
            case 0:
                cout << "Voltando para o Menu Inicial." << endl;
                return;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    }
}
//---------------------MENU GERAL--------------------------------//   
int main(){ 
    vector<Cliente> clientes; 
    vector<Veiculo> veiculos;

    int escolha;
    while (true) {
        cout << "Menu Principal:" << endl;
        cout << "1. Gerenciamento de Clientes" << endl;
        cout << "2. Gerenciamento de Veículos" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                MenuClientes(clientes);
                break;
            case 2:
                MenuVeiculos(veiculos);
                break;
            case 0:
                cout << "Saindo do programa. Até logo!" << endl;
                return 0;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
    }    
    return 0;
}