#include <iostream>
#include <string>
#include <map>

using namespace std;

int calculaLEDs(string v)
{
    map<char, int> leds { {'1', 2}, {'2', 5}, {'3', 5}, {'4', 4}, {'5', 5},
    {'6', 6}, {'7', 3}, {'8', 7}, {'9', 6}, {'0', 6}};
    int totalLEDs = 0;

    for(int i = 0; i < v.size(); i++)
    {
        totalLEDs = totalLEDs + leds.find(v[i])->second;
    }

    return totalLEDs;
}

int main()
{
    int n;
    string v;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> v;
        cout << calculaLEDs(v) << " leds" << endl;
    }

    return 0;
}