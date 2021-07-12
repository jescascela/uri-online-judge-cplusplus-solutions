#include <iostream>
#include <iomanip> // std::setprecision

using namespace std;

int main()
{
    int codigoPeca1;
    int numeroDePecas1;
    double valorPeca1;
    int codigoPeca2;
    int numeroDePecas2;
    double valorPeca2;
    double total;

    cin >> codigoPeca1 >> numeroDePecas1 >> valorPeca1;
    cin >> codigoPeca2 >> numeroDePecas2 >> valorPeca2;

    total = (numeroDePecas1 * valorPeca1) + (numeroDePecas2 * valorPeca2);

    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}