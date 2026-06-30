#include <iostream>
using namespace std;
int sum(int, int);

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum = " << sum(a, b);

    return 0;
}
int sum(int x, int y)
{
    return x + y;
}