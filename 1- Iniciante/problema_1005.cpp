#include <iostream>
#include <iomanip> // std::setprecision

using namespace std;

int main()
{
    double A;
    double B;
    double MEDIA;

    cin >> A;
    cin >> B;

    MEDIA = (A*3.5 + B*7.5) / 11;

    cout << "MEDIA = " << setprecision(5) << fixed << MEDIA << endl;

    return 0;
}