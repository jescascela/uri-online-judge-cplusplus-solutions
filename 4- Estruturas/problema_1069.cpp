#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int contaDiamantes(string diamantes)
{
    int j;
    int total = 0;

    for(int i = 0; i < diamantes.size() - 1 && diamantes.size() != 0; i++)
    {
        j = i + 1;
        
        if(diamantes[i] == '<' && diamantes[j] == '>')
        {
            diamantes.erase(diamantes.begin() + i);
            diamantes.erase(diamantes.begin() + i);
            total = total + 1;
            i = -1;
        }      
    }

    if(diamantes == "<>")
    {
        total = total + 1;
    }

    return total;
}

string removeParticulasDeAreia(string diamantes)
{
    diamantes.erase(remove(diamantes.begin(), diamantes.end(), '.'), diamantes.end());
    return diamantes;
}

int main()
{
    int n;
    string diamantes;

    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        getline(cin, diamantes);
        cout << contaDiamantes(removeParticulasDeAreia(diamantes)) << endl;
    }

    return 0;
}