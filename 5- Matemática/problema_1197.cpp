#include <iostream>

using namespace std;

int deslocamento(int velocidade, int tempo)
{
    int deslocamento;

    deslocamento = velocidade * (2 * tempo);

    return deslocamento;
}

int main()
{
    int velocidade;
    int tempo;

    while (cin >> velocidade >> tempo)
    {
        cout << deslocamento(velocidade, tempo) << endl;
    }
    
    return 0;
}