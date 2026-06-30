#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    int first = v[0];

    for(int i = 0; i < n - 1; i++)
    {
        v[i] = v[i + 1];
    }

    v[n - 1] = first;

    cout << "Vector after left rotation:\n";

    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}