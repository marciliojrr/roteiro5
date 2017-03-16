#include <iostream>
#include <string>

using namespace std;

class Pessoa {

    private:
        string nome, telefone;
        int idade;

    public:
        string getNome() {
            return nome;
        }
        string getTelefone() {
            return telefone;
        }
        int getIdade() {
            return idade;
        }
        void setNome (string n) {
            nome = n;
        }
        void setTelefone (string t) {
            telefone = t;
        }
        void setIdade (int i) {
            idade = i;
        }
    Pessoa (string n) {
        setNome(n);
        }
    Pessoa (string n, int i, string t) {
        setNome(n);
        setIdade(i);
        setTelefone(t);
        }
};
int main () {
    string n, t;
    int i;

    Pessoa CadastroDePessoas (string n, int i, string t);
    cout << endl << "Digite o nome da pessoa: " << endl;
    cout << "------------------------" << endl;
    cin >> n;
    cout << endl << "Agora digite a idade: " << endl;
    cout << "---------------------" << endl;
    cin >> i;
    cout << endl << "Digite o telefone para contato: " << endl;
    cout << "-------------------------------" << endl;
    cin >> t;
    cout << endl << "Esses foram os dados fornecidos:" << endl;
    cout << "Nome: " << n << endl << "Idade: " << i << endl << "Telefone: " << t << endl;

    return main();
}

