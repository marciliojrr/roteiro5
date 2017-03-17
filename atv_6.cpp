#include <iostream>
#include <string>
#include <stdio.h>
/* Atividade feita com ajuda do aluno Odilon */
using namespace std;
class Pagamento{
    private:
        float valorPagamento;
        string nomeDoFuncionario;
    public:
        float getValorPagamento(){
            return valorPagamento;
        }
        string getNomeDoFuncionario(){
            return nomeDoFuncionario;
        }
        void setValorPagamento(double vp){
            valorPagamento = vp;
        }
        void setNomeDoFuncionario(string ndf){
            nomeDoFuncionario = ndf;
        }
};
class ControleDePagamentos{
    private:
        int n = 0;
        Pagamento pagamentos[100];
    public:
        void setPagamentos(){
            int salario, tmp;
            string gasto;
            for(int i=0; i<100; i++){
                cout << "Digite seu salario ou 0 para sair: " << endl;
                cin >> salario;
                fflush(stdin);
                if(salario == 0){
                    break;
                }else{
                    pagamentos[n].setValorPagamento(salario);
                    cout << "Digite o nome do funcionario: " << endl;
                    cin >> gasto;
                    pagamentos[n].setNomeDoFuncionario(gasto);
                    n++;
                }
            }
        }
        float CalculaTotalDePagamentos(){
            float soma = 0;
            for(int i=0; i<n; i++){
                soma += pagamentos[i].getValorPagamento();
            }
            return soma;
        }
        bool ExistePagamentoParaFuncionario(string busca){
            for(int i = 0; i<n; i++){
                if(busca.compare(pagamentos[i].getNomeDoFuncionario())==0){
                    return true;
                }
            }
            return false;
        }
};
int main(){
    ControleDePagamentos PagamentoTest;
    int opcao;
    string procura;
    while(true){
        cout << "1 - Digite o valor do pagamento: " << endl;
        cout << "2 - Digite o nome do funcionario para verificar se ha salario para ele: "<< endl;
        cin >> opcao;
        if(opcao == 1){
            PagamentoTest.setPagamentos();
        }
        if(opcao == 2){
            PagamentoTest.ExistePagamentoParaFuncionario(procura);
        }
}
    return 0;
}
