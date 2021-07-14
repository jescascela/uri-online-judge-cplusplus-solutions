#include <iostream>

using namespace std;

// MDC pelo método de Euclides
int mdc(int numero1, int numero2)
{
    if(numero1 % numero2 == 0)
    {
        return numero2;
    }

    return mdc(numero2, numero1 % numero2);
}

int main()
{
    int n;
    int f1;
    int f2;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> f1 >> f2;
        cout << mdc(f1, f2) << endl;
    }

    return 0;
}