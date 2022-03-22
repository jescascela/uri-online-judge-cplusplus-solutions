#include <iostream>

using namespace std;

int minutosDormir(int h1, int m1, int h2, int m2)
{
    int totalMinutos;

    if(h1 > h2 || (h1 == h2 && m1 > m2))
    {
        h2 = h2 + 24;
    }

    totalMinutos = (h2*60 + m2) - (h1*60 + m1);

    return totalMinutos;
}

int main()
{
    int h1;
    int m1;
    int h2;
    int m2;

    cin >> h1 >> m1 >> h2 >> m2;

    while (h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0)
    {
        cout << minutosDormir(h1, m1, h2, m2) << endl;
        cin >> h1 >> m1 >> h2 >> m2;
    }
    
    return 0;
}