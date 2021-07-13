#include <iostream>
#include <cmath> // std::abs

using namespace std;

struct numeroRacional
{
    int numerador;
    int denominador;
} numeroRacional1, numeroRacional2;

// MDC recursivo utilizando o método de Euclides
int mdcEuclides(int numero1, int numero2)
{
    if(numero1 % numero2 == 0)
    {
        return numero2;
    }

    return mdcEuclides(numero2, numero1%numero2);
}

void simplificaFracao(int numerador, int denominador)
{
    int divisor = 1;
    int maior;
    int menor;

    if(numerador == 0)
    {
        cout << " = " << numerador << "/" << 1 << endl;
    }
    else
    {
        if(numerador > denominador)
        {
            maior = numerador;
            menor = denominador;
        }
        else
        {
            maior = denominador;
            menor = numerador;
        }

        divisor = mdcEuclides(maior, menor);

        if(divisor != 1)
        {
            if((numerador < 0 && denominador < 0) || (numerador > 0 && denominador > 0))
            {
                cout << " = " << numerador / divisor << "/" << denominador / divisor << endl;
            }
            else
            {
                cout << " = -" << abs(numerador / divisor) << "/" << abs(denominador / divisor) << endl;
            }
        }
        else
        {
            if((numerador < 0 && denominador < 0) || (numerador > 0 && denominador > 0))
            {
                cout << " = " << abs(numerador) << "/" << abs(denominador) << endl;
            }
            else
            {
                cout << " = " << numerador << "/" << denominador << endl;
            }
        }
    }
}

void somaFracoes(int numerador1, int denominador1, int numerador2, int denominador2, char operacao)
{
    int resultadoNumerador;
    int resultadoDenominador;

    switch (operacao)
    {
        case '+':
            resultadoNumerador = numerador1 * denominador2 + numerador2 * denominador1;
            resultadoDenominador = denominador1 * denominador2;
            cout << resultadoNumerador << "/" << resultadoDenominador;
            simplificaFracao(resultadoNumerador, resultadoDenominador);
            break;
        case '-':
            resultadoNumerador = numerador1 * denominador2 - numerador2 * denominador1;
            resultadoDenominador = denominador1 * denominador2;
            cout << resultadoNumerador << "/" << resultadoDenominador;
            simplificaFracao(resultadoNumerador, resultadoDenominador);
            break;
        case '*':
            resultadoNumerador = numerador1 * numerador2;
            resultadoDenominador = denominador1 * denominador2;
            cout << resultadoNumerador << "/" << resultadoDenominador;
            simplificaFracao(resultadoNumerador, resultadoDenominador);
            break;
        case '/':
            resultadoNumerador = numerador1 * denominador2;
            resultadoDenominador = numerador2 * denominador1;
            cout << resultadoNumerador << "/" << resultadoDenominador;
            simplificaFracao(resultadoNumerador, resultadoDenominador);
            break;

    }
}


int main()
{
    int n;
    int x;
    int y;
    char divisao1;
    char divisao2;
    char operacao;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> numeroRacional1.numerador >> divisao1 >> numeroRacional1.denominador
        >> operacao >> numeroRacional2.numerador >> divisao2 >> numeroRacional2.denominador;

        somaFracoes(numeroRacional1.numerador, numeroRacional1.denominador,
        numeroRacional2.numerador, numeroRacional2.denominador, operacao);
    }

    return 0;
}