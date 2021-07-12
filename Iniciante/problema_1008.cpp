#include <iostream>
#include <iomanip> // std::setprecision

using namespace std;

int main()
{
    int numeroFuncionario;
    int horasTrabalhadas;
    double valorHora;

    cin >> numeroFuncionario;
    cin >> horasTrabalhadas;
    cin >> valorHora;

    cout << "NUMBER = " << numeroFuncionario << endl;
    cout << "SALARY = U$ " << setprecision(2) << fixed << (horasTrabalhadas * valorHora) << endl;

    return 0;
}