#include <iostream>
#include <string>

using namespace std;

string intervalo(double n)
{
    if(n >= 0.0 && n <= 25.0)
    {
        return "Intervalo [0,25]";
    }

    if(n > 25.0 && n <= 50.0)
    {
        return "Intervalo (25,50]";
    }

    if(n > 50.0 && n <= 75.0)
    {
        return "Intervalo (50,75]";
    }

    if(n > 75.0 && n <= 100.0)
    {
        return "Intervalo (75,100]";
    }

    return "Fora de intervalo";
}

int main()
{
    double n;

    cin >> n;

    cout << intervalo(n) << endl;

    return 0;
}