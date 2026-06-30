#include <iostream>
using namespace std;

long long power(int, int);

int main()
{
    int base, exp;

    cout << "Enter Base: ";
    cin >> base;

    cout << "Enter Exponent: ";
    cin >> exp;

    cout << "Result = " << power(base, exp);

    return 0;
}

long long power(int b, int e)
{
    long long result = 1;

    for(int i = 1; i <= e; i++)
    {
        result *= b;
    }

    return result;
}