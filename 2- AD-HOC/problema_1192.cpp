#include <iostream>

using namespace std;

int findResult(int number1, char letter, int number2)
{
    if(number1 == number2)
    {
        return number1 * number2;
    }

    if(letter >= 'A' && letter <= 'Z')
    {
        return number2 - number1;
    }

    return number1 + number2;
}

int main()
{
    int number1;
    char letter;
    int number2;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> number1 >> letter >> number2;
        cout << findResult(number1, letter, number2) << endl;
    }


    return 0;
}