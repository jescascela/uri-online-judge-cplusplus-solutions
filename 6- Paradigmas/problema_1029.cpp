#include <iostream>

using namespace std;

int fib(int x, int *totalChamadas)
{
    *totalChamadas = *totalChamadas + 1;

    if(x == 0)
    {
        return 0;
    }

    if(x == 1)
    {
        return 1;
    }

    return fib(x - 1, totalChamadas) + fib(x - 2, totalChamadas);
}

int main()
{
    int n;
    int x;
    int totalChamadas = 0;
    int resultadoFib;

    cin >> n;

    for(int i = 0; i < n ; i++)
    {
        cin >> x;
        resultadoFib = fib(x, &totalChamadas);
        // totalChamadas - 1 pois a primeira chamada não deve ser contabilizada
        // Apenas as chamadas recursivas devem ser consideradas
        cout << "fib(" << x << ")" << " = " << totalChamadas - 1 << " calls = " << resultadoFib << endl;
        totalChamadas = 0;
    }
    return 0;
}