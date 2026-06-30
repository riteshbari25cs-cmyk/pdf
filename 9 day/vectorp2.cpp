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

    int max = v[0];

    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] > max)
            max = v[i];
    }

    cout << "Maximum element = " << max;

    return 0;
}