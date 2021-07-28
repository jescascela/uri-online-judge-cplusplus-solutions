#include <iostream>
#include <cmath>

using namespace std;

bool primo(int n)
{
    int cont = 0;

    if(n == 1 || n == 2)
    {
        return true;
    }

    /*
        A estratégia para resolver esse problema
        é fazer a verificação até a raiz quadrada do número.
        Uma explicação para esse motivo pode ser encontrada no link abaixo:
        https://dev.to/priyanka__488/number-theory-primality-test-in-o-sqrt-n-dde
    */
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            cont++;

            if(cont >= 1)
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int n;
    int x;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(primo(x) == true)
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not Prime" << endl;
        }
    }

    return 0;
}