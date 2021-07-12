#include <iostream>
#include <iomanip> // std::setprecision

using namespace std;

int main()
{
    double A;
    double B;
    double C;
    double MEDIA;

    cin >> A;
    cin >> B;
    cin >> C;

    MEDIA = (A*2 + B*3 + C*5) / 10;

    cout << "MEDIA = " << setprecision(1) << fixed << MEDIA << endl;

    return 0;
}