#include <iostream>
#include <string>

using namespace std;

class Invoice {
    private:
        int num, qtd;
        string descricao;
        double preco, total;
    public:
        int getNumero (){
            return num;
    }
        int getQuantidade (){
            return qtd;
    }
        string getDescricao (){
            return descricao;
    }
        double getPreco (){
            return preco;
    }
        void setNumero (int n){
            num = n;
    }
        void setQuantidade (int q){
            if (q >= 0){
                qtd = q;
            } else {
                qtd = 0;
            }
    }
        void setDescricao (string d){
            descricao = d;
    }
        void setPreco (double p){
            if (p < 0){
                setPreco(0.0);
            } else {
            preco = p;
            }
    }
        double getInvoiceAmount(){
            total = (qtd*preco);
            if (qtd < 0) {
                    qtd = 0;
            }
            if (preco < 0){
                    preco = 0.0;
            }
            return total;
        }
    Invoice(){
        setNumero(1);
        setQuantidade(1);
        setDescricao("Padrao");
        setPreco(1.0);
    }
    Invoice (int n, int q, string d, double p) {
        setNumero(n);
        setQuantidade(q);
        setDescricao(d);
        setPreco(p);
        }
};
int main(){
    string d;
    double p;
    Invoice InvoiceTest(3, 2, "Celular", 799.90);
    d = InvoiceTest.getDescricao();
    p = InvoiceTest.getPreco();
    cout << "Produto: " << d << endl << "Custo: R$" << p << endl;
    return 0;
}
