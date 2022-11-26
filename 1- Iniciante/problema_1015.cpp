#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main()
{
    float x1;
    float y1;
    float x2;
    float y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    cout << setprecision(4) << fixed << sqrt(pow(x2 - x1,2) + pow(y2 - y1, 2)) << endl;
    
    return 0;
}