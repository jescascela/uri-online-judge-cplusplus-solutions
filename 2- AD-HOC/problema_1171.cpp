#include <iostream>
#include <vector>
#include <algorithm> // std::sort

using namespace std;

int main()
{
    int n;
    int numero;
    vector<int> numeros;
    int cont = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> numero;
        numeros.push_back(numero);
    }

    sort(numeros.begin(), numeros.end());

    for(vector<int>::iterator it = numeros.begin(); it != numeros.end(); it++)
    {
        if(cont == 0)
        {
            numero = (*it);
            cont++;
        }
        else
        {
            if(numero == (*it))
            {
                cont++;
            }
            else
            {
                cout << numero << " aparece " << cont << " vez(es)" << endl;
                cont = 0;
                it = it - 1;
            }
        }
    }

    if(cont != 0)
    {
        cout << numero << " aparece " << cont << " vez(es)" << endl;
    }

    return 0;
}