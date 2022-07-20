/*
    Neste problema, não é possível analisar apenas as posições horizontais e veriticais.
    Temos que ficar atentos, pois os cilindros podem ser colocados em diagonal.
    Porém, apenas somar os diâmetros dos cilíndros e comparar com a diagonal não funciona
    para todos os casos, pois nem sempre, a diagonal do retângulo passe pelos centros
    dos círculos.

    Uma boa explicação sobre esse problema pode ser encontrada no próprio fórum do beecrowd,
    inclusive com uma imagem ilustrando a situação. Confira no link abaixo:
    
    https://www.beecrowd.com.br/judge/pt/questions/view/1124/6285
*/

#include <iostream>
#include <cmath>

using namespace std;

char testeCilindros(int l, int c, int r1, int r2)
{

    int somaDosRaios;
    double distanciaCentros;
    
    // Valores para representar as coordenadas dos centros do círculos
    int x1;
    int y1;
    int x2;
    int y2;

    /*
        Primeiro teste verifica se os cilíndros cabem
        individualmente no elevador
    */
    if(r1 * 2 > l || r1 * 2 > c || r2 * 2 > l || r2 * 2 > c)
    {
        return 'N';
    }

    somaDosRaios = r1 + r2;

    /*
        Aqui posicionamos o menor cilíndro no canto inferior esquerdo
        e o maior cilíndro no canto superior direito
    */
    if(r1 < r1)
    {
        x1 = r1;
        y1 = r1;
        x2 = c - r2;
        y2 = l - r2;
    }
    else
    {
        x1 = r2;
        y1 = r2;
        x2 = c - r1;
        y2 = l - r1;
    }

    distanciaCentros = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    if(distanciaCentros >= somaDosRaios)
    {
        return 'S';
    }

    return 'N';
}

int main()
{
    int l;
    int c;
    int r1;
    int r2;

    while (cin >> l >> c >> r1 >> r2)
    {
        if(l == 0 && c == 0 && r1 == 0 && r2 == 0)
        {
            break;
        }
        else
        {
            cout << testeCilindros(l, c, r1, r2) << endl;
        }
    }
    
    return 0;
}