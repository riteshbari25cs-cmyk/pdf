#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    int a[n1];

    cout << "Enter first array elements:\n";
    for(int i = 0; i < n1; i++)
        cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> n2;

    int b[n2];

    cout << "Enter second array elements:\n";
    for(int i = 0; i < n2; i++)
        cin >> b[i];

    set<int> s;

    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            if(a[i] == b[j])
            {
                s.insert(a[i]);
            }
        }
    }

    cout << "Intersection:\n";

    for(int value : s)
    {
        cout << value << " ";
    }

    return 0;
}