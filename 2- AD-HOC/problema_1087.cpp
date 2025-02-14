/*
    --- Dica ---
    Neste problema em específico, é possível perceber que o número máximo de movimentos
    para se chegar a qualquer ponto é 2, que ocorre quando o ponto de destino não encontra-se
    em nenhuma das linhas de movimentos da dama.
*/
#include <iostream>
#include <cmath>

using namespace std;

int calculaQuantidadeMovimentos(int x1, int y1, int x2, int y2)
{
    if(x1 == x2 && y1 == y2)
    {
        return 0;
    }

    if(x1 == x2 || y1 == y2)
    {
        return 1;
    }

    /*
        Se o movimento é na diagonal, então a quantidade deslocada na vertical
        é a mesma quantidade deslocada na horizontal
    */ 
    if(abs(x1 - x2) == abs(y1 - y2))
    {
        return 1;
    }

    return 2;
}

int main()
{
    int x1;
    int y1;
    int x2;
    int y2;
    int qtdMov; // Quantidade de movimentos

    while(1)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
        {
            break;
        }

        qtdMov = calculaQuantidadeMovimentos(x1, y1, x2, y2);

        cout << qtdMov << endl;
    }

    return 0;
}