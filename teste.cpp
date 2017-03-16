#include <iostream>
#inclide <string>

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
    char getNome (){
        return nome;
    }
    char getSobrenome(){
        return sobrenome;
    }
    double getSalario(){
        return salario;
    }
    Empregado(){
        setNome("Vazio")
        setSobrenome("Vazio")
        setSalario(0.0);
    }
    Empregado (string n, string sn, double sal){
        setNome(n);
        setSobrenome(sn);
        setSalario(sal);
    }
};

