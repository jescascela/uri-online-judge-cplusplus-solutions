#include <iostream>
#include <vector>

using namespace std;

char identifyAnswer(int a, int b, int c, int d, int e)
{
    char answer = ' '; // resposta vazia
    vector<char> letter {'A', 'B', 'C', 'D', 'E'};
    vector<int> myvector {a, b, c, d, e};

    for(vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
    {
        if(*it <= 127 && answer == ' ')
        {
            answer = letter.at(it - myvector.begin()); // índice atual
        }
        else
        {
            // marcar mais de uma alternativa na mesma questão
            if(*it <= 127 && answer != ' ')
            {
                answer = '*';
                return answer;
            }
        }
    }

    // não marcar nenhuma alternativa
        if(answer == ' ')
        {
            answer = '*';
            return answer;
        }

    return answer;
}

int main()
{
    int n;
    int a, b, c, d, e;
    int i;

    cin >> n;

    while (n != 0)
    {
        for(i = 0; i < n; i++)
        {
            cin >> a >> b >> c >> d >> e;
            cout << identifyAnswer(a, b, c, d, e) << endl;
        }
        cin >> n;
    }

    return 0;
}