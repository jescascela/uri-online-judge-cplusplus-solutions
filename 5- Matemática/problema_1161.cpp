#include <iostream>

using namespace std;

long long int fatorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    return n * fatorial(n-1);
}

int main()
{
    int m;
    int n;

    while(cin >> m >> n)
    {
        cout << fatorial(m) + fatorial(n) << endl;
    }

    return 0;
}