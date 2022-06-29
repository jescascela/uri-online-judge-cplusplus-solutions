#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calculaHipotenusa(int h, int c)
{
    return sqrt(h * h + c * c);
}

double areaTotalSuperficieRampa(int h, int c, int l, int n)
{
    double comprimentoRampa = calculaHipotenusa(h, c) * n;
    double area = l * comprimentoRampa; // Área de um retângulo

    return (area / 10000); // Retorna área em metros
}

int main()
{
    int n;
    int h;
    int c;
    int l;

    while (cin >> n)
    {
        cin >> h >> c >> l;
        cout << fixed << setprecision(4) << areaTotalSuperficieRampa(h, c, l, n) << endl;
    }

    return 0;
}