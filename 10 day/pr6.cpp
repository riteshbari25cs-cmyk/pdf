#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n, x;
    set<int> s;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
    }

    cout << "Array after removing duplicates:\n";

    for(int value : s)
    {
        cout << value << " ";
    }

    return 0;
}