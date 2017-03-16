#include <iostream>
#include <string>

using namespace std;

class Empregado {
private:
    string nome, sobrenome;
    double salario;
public:
    void setNome (string n){
        nome = n;
    }
    void setSobrenome (string sn){
        sobrenome = sn;
    }
    void setSalario (double sal){
        if (sal <0){
                setSalario(0.0);
        } else {}
        salario = sal;
    }
    string getNome (){
        return nome;
    }
    string getSobrenome(){
        return sobrenome;
    }
    double getSalario(){
        return salario;
    }
    Empregado(){
        setNome("Vazio");
        setSobrenome("Vazio");
        setSalario(0.0);
    }
    Empregado (string n, string sn, double sal){
        setNome(n);
        setSobrenome(sn);
        setSalario(sal);
    }
};
int main (){
    string n1, sn1;
    double sal1;
    Empregado EmpregadoTest("nome", "sobrenome", 900.00);
    n1 = EmpregadoTest.getNome();
    sn1 = EmpregadoTest.getSobrenome();
    sal1 = EmpregadoTest.getSalario();
    cout << "Empregado" << endl <<"Nome: " << n1 << " " << sn1 << endl;
    cout << "Salario" << endl << "R$: " << sal1 << endl;
    return 0;
}
