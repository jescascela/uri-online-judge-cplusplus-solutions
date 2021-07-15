#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    float y;
    float consumo;

    cin >> x;
    cin >> y;

    consumo = x / y;

    cout << setprecision(3) << fixed << consumo << " km/l" << endl;

    return 0;
}