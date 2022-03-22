#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

// Remove os dígitos, os espaços em branco e coloca o texto em minúsculo
string formatarTexto(string texto)
{
    for(int i = 0; i < texto.length(); i++)
    {
        if(!isalpha(texto[i]))
        {
            texto.erase(texto.begin() + i);
            i--; // necessário retornar pois o tamanho do texto muda
        }
        else
        {
            texto[i] = tolower(texto[i]);
        }
    }

    sort(texto.begin(), texto.end());

    return texto;
}

int encontraMaiorValor(map<char, int> mapa)
{
    int maiorValor = 0;

    for(map<char, int>::iterator it = mapa.begin(); it != mapa.end(); it++)
    {
        if(it->second > maiorValor)
        {
            maiorValor = it->second;
        }
    }

    return maiorValor;
}

void frequenciaLetras(string texto)
{
    string textoLimpo = formatarTexto(texto);
    int cont = 0;
    int j;
    map<char, int> qtdLetra;
    int maiorValor;
    bool todasIguais = true;
    
    if(!textoLimpo.empty())
    {
        for(int i = 0; i < textoLimpo.length() - 1; i++)
        {
            j = i + 1;
            while(textoLimpo[i] == textoLimpo[j] && j + 1 <= textoLimpo.length())
            {
                cont++;
                i++;
                j = i + 1;
            }

            if(cont > 0)
            {
                qtdLetra.insert(pair<char, int>(textoLimpo[i], cont + 1));
                cont = 0;
                todasIguais = false;
            }
        }

        if(todasIguais == true)
        {
            cout << textoLimpo;
        }
        else
        {
            maiorValor = encontraMaiorValor(qtdLetra);
        
            for(map<char, int>::iterator it = qtdLetra.begin(); it != qtdLetra.end(); it++)
            {
                if(it->second == maiorValor)
                {
                    cout << it->first;
                }
            }
        }
    }
}

int main()
{
    int n;
    string texto;

    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        getline(cin, texto);
        
        frequenciaLetras(texto);

        cout << endl;
    }

    return 0;
}