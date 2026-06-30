#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    int n1, n2, x;

    cout << "Enter size of first array: ";
    cin >> n1;

    cout << "Enter first array elements:\n";
    for(int i = 0; i < n1; i++)
    {
        cin >> x;
        s.insert(x);
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    cout << "Enter second array elements:\n";
    for(int i = 0; i < n2; i++)
    {
        cin >> x;
        s.insert(x);
    }

    cout << "Union of Arrays:\n";

    for(int value : s)
    {
        cout << value << " ";
    }

    return 0;
}