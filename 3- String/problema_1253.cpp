#include <iostream>
#include <string>

using namespace std;

string cifraDeCesarModificada(string str, int deslocamento)
{

    for(int i = 0; i < str.size(); i++)
    {
        if(tolower(str[i] - deslocamento) < 97)
        {
            str[i] = toupper(123 - (97 - (tolower(str[i]) - deslocamento)));
        }
        else
        {
            str[i] = str[i] - deslocamento;
        }
    }

    return str;
}

int main()
{
    int n;
    string linha;
    int deslocamento;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> linha;
        cin >> deslocamento;

        cout << cifraDeCesarModificada(linha, deslocamento) << endl;
    }

    return 0;
}