#include <iostream>

#define PI 3.1415

using namespace std;

int main()
{
    int r;
    int l;
    double volume;

    cin >> r >> l;

    volume = 4.0 / 3.0 * PI * r * r * r; // Volume de uma esfera

    cout << int (l / volume) << endl;

    return 0;
}