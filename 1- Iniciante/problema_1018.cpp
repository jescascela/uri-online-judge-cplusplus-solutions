#include <iostream>

using namespace std;

unsigned int qtdNotas(unsigned int *valor, unsigned int nota)
{
    unsigned int total = 0;

    while(*valor >= nota)
    {
        *valor = *valor - nota;
        total++;
    }

    return total;
}

int main()
{
    unsigned int n;

    cin >> n;

    cout << n << endl;
    cout << qtdNotas(&n, 100) << " nota(s) de R$ 100,00" << endl;
    cout << qtdNotas(&n, 50) << " nota(s) de R$ 50,00" << endl;
    cout << qtdNotas(&n, 20) << " nota(s) de R$ 20,00" << endl;
    cout << qtdNotas(&n, 10) << " nota(s) de R$ 10,00" << endl;
    cout << qtdNotas(&n, 5) << " nota(s) de R$ 5,00" << endl;
    cout << qtdNotas(&n, 2) << " nota(s) de R$ 2,00" << endl;
    cout << qtdNotas(&n, 1) << " nota(s) de R$ 1,00" << endl;


    return 0;
}