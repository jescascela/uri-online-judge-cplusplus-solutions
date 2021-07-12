#include <iostream>
#include <iomanip> // std::setprecision

using namespace std;

int main()
{
    double n = 3.14159;
    double raio;

    cin >> raio;
    cout << "A=" << setprecision(4) << fixed <<  n * (raio * raio) << endl;

    return 0;
}