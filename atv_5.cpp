#include <iostream>
#include <string>
/* Atividade feita com ajuda do aluno Odilon */
using namespace std;

class Despesa {
    private:
        float valor;
        string tipoDeGasto;
    public:
        float getValor() {
            return valor;
        }
        string getTipoDeGasto() {
            return tipoDeGasto;
        }
        void setValor(float v) {
            valor = v;
        }
        void setTipoDeGasto(string t){
            tipoDeGasto = t;
        }
};
class ControleDeGastos{
    private:
        int n = 0;
        Despesa despesas[100];
    public:
        void setDespesas(){
            int valor;
            string gasto;
            for(int i=0; i<100; i++){
                cout << "Digite um valor ou 0 para sair: " << endl;
                cin >> valor;
                fflush(stdin);
                if(valor == 0){
                    break;
                }else{
                    despesas[n].setValor(valor);
                    cout << "Digite o tipo de gasto: " << endl;
                    cin >> gasto;
                    despesas[n].setTipoDeGasto(gasto);
                    n++;
                }
            }
        }
        float CalculaTotalDeDespesas(){
            float soma = 0;
            for(int i=0; i<n; i++){
               soma += despesas[i].getValor();
            }
        }
            bool ExisteDespesaDoTipo(string busca){
                for(int i=0; i<n; i++){
                    if(busca.compare(despesas[i].getTipoDeGasto())== 0){
                        return true;
                    }
                }
                return false;
            }
};



int main(){
    ControleDeGastos ControleDeGastosTest;
    int opcao;
    while(true){
        string busca;fflush(stdin);
        cout << "1- Digitar suas despesas" << endl;
        cout << "2- Procurar despesa" <<  endl;
        cin >> opcao;
        if(opcao == 1){
            ControleDeGastosTest.setDespesas();
        }
        if(opcao == 2){
            cout << "Digite a despesa que voce busca: " << endl;
            cin >> busca;
            ControleDeGastosTest.ExisteDespesaDoTipo(busca);
        }

    }
    return 0;
    }
