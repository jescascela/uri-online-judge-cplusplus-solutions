#include <iostream>
#include <string>

using namespace std;

string localizaResidencia(int n, int m, int x, int y)
{
    if(n == x || m == y)
    {
        return "divisa";
    }

    if(x > n && y > m)
    {
        return "NE";
    }

    if(y > m && x < n)
    {
        return "NO";
    }

    if(y < m && x > n)
    {
        return "SE";
    }

    return "SO";
}

int main()
{
    int k;
    int n;
    int m;
    int x;
    int y;

    cin >> k;

    while(k > 0)
    {
        cin >> n >> m;

        for(int i = 0; i < k; i++)
        {
            cin >> x >> y;
            cout << localizaResidencia(n, m, x, y) << endl;
        }

        cin >> k;
    }

    return 0;
}