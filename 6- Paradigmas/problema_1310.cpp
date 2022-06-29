#include <iostream>
#include <vector>
#include <algorithm> // std::max
#include <climits> // INT_MIN

using namespace std;

// Kadane's Algorithm
int maxSumSubArray(vector<int> lucroPorDia)
{
    int n = lucroPorDia.size();
    int localMax = 0;
    int globalMax = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        localMax = max(lucroPorDia[i], lucroPorDia[i] + localMax);
        if(localMax > globalMax)
        {
            globalMax = localMax;
        }
    }

    if(globalMax <= 0)
    {
        return 0;
    }

    return globalMax;
}

int main()
{
    vector<int> lucroPorDia;
    int n;
    int x;
    int custoPorDia;

    while(cin >> n)
    {
        cin >> custoPorDia;

        for(int i = 0; i < n; i++)
        {
            cin >> x;
            lucroPorDia.push_back(x - custoPorDia);
        }

        cout << maxSumSubArray(lucroPorDia) << endl;
        lucroPorDia.clear();
    }

    return 0;
}