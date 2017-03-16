#include <iostream>

using namespace std;

class Data {
    private:
        int dia, mes, ano;

    public:
        int getDia() {
            return dia;
    }
        int getMes() {
            return mes;
    }
        int getAno() {
            return ano;
    }
        void setDia(int d) {
            dia = d;
    }
        void setMes(int m) {
            mes = m;
    }
        void setAno(int a) {
            ano = a;
    }
        void avancarDia() {
            dia++;
            if ((dia == 28) && (mes == 2)) {
                dia = 1;
                mes++;
            }
            if (dia == 31) {
                 dia = 1;
                 mes++;
        }
            if (mes == 13) {
                 mes = 1;
                 ano++;
        }
    }
    Data (int d, int m, int a) {
    if (a > 0) {
        setAno(a);
    }
    else {
        setAno(1);
    }
    if (m >= 1 && m <= 12) {
        setMes(m);
    }
    else {
        setMes(1);
    }
    if ((d >= 1) && (d <= 31) && ((m == 1) || (m = 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12))) {
        setDia(d);
    }
        else if ((d >= 1 && d <= 30) && (m == 4 || m == 6 || m == 9 || m == 11)) {
        setDia(d);
        }
        else if ((d >= 1 && d <= 28) && (m == 2)) {
            setDia(d);
        }
        else {
            setDia(1);
        }
}
};
int main(){
    Data dataTest(15, 3, 2017);
    cout << "Data de hoje: " << endl << dataTest.getDia() << "/" << dataTest.getMes() << "/" << dataTest.getAno();
    dataTest.avancarDia();
    cout << endl <<"Data de Amanha: " << endl <<
    dataTest.getDia() << "/" << dataTest.getMes() << "/" << dataTest.getAno();
    return 0;
}
