#include <iostream>

using namespace std;

int main()
{
    unsigned int a;
    unsigned int b;
    unsigned int total;

    while(cin >> a >> b)
    {
        total = a ^ b; // bitwise XOR
        cout << total << endl;
    }

    return 0;
}