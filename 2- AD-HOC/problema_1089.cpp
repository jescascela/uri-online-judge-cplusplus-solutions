/*
    --- Dica ---
    Neste exercício a estratégia é verificar se o númmero da amostra
    forma um pico entre o número anterior e o próximo, ou seja,
    se a amostra atual é maior que a anterior e a próxima ou
    se a amostra atual é menor que a anterior e a próxima.
    Mas é preciso ficar atento com a amostra inicial e final pois existe o loop
    que também pode formar pico
*/
#include <iostream>
#include <vector>

using namespace std;

int calculaPicos(vector<int> amostras)
{
    int totalPicos = 0;

    if(amostras.size() > 2)
    {
        for(vector<int>::iterator it = amostras.begin() + 1; it != amostras.end() - 1; it++)
        {
            if(*it > *next(it, -1) && *it > *next(it, 1) || *it < *next(it, -1) && *it < *next(it, 1))
            {
                totalPicos = totalPicos + 1;
            }
        }

        if(amostras[0] > amostras[amostras.size() - 1] && amostras[0] > amostras[1])
        {
            totalPicos = totalPicos + 1;
        }

        if(amostras[0] < amostras[amostras.size() - 1] && amostras[0] < amostras[1])
        {
            totalPicos = totalPicos + 1;
        }

        if(amostras[amostras.size() - 1] > amostras[amostras.size() - 2] && amostras[amostras.size() - 1] > amostras[0])
        {
            totalPicos = totalPicos + 1;
        }

        if(amostras[amostras.size() - 1] < amostras[amostras.size() - 2] && amostras[amostras.size() - 1] < amostras[0])
        {
            totalPicos = totalPicos + 1;
        }

        return totalPicos;
    }

    return 2;
}

int main()
{
    int n;
    vector<int> amostras;
    int amostra;
    int totalPicos;

    cin >> n;

    while(n != 0)
    {
        for(int i = 0; i < n; i++)
        {
            cin >> amostra;
            amostras.push_back(amostra);
        }
        totalPicos = calculaPicos(amostras);
        cout << totalPicos << endl;
        amostras.erase(amostras.begin(), amostras.end());
        cin >> n;
    }

    return 0;
}