#include <iostream>
#include <string>
#include <iomanip> // std::setprecision

using namespace std;

int main()
{
    char nome[100];
    double salario;
    double montante;
    double valorComissao;

    cin >> nome;
    cin >> salario;
    cin >> montante;

    valorComissao = montante * 15 / 100;

    montante = salario + valorComissao;

    cout << fixed << setprecision(2) << "TOTAL = R$ " << montante << endl;
    return 0;
}