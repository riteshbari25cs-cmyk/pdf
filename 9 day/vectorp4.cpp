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

    cout << "Reversed Vector:\n";

    for(int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }

    return 0;
}