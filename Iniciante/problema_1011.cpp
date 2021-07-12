#include <iostream>
#include <iomanip> // std::setprecision

using namespace std;

int main()
{
    double raio;
    const double pi = 3.14159;
    double volume;

    cin >> raio;

    volume = (4.0/3) * pi * (raio * raio * raio);

    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;

    return 0;
}