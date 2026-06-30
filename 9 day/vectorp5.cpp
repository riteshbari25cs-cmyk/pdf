#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v, unique;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); i++)
    {
        bool found = false;

        for(int j = 0; j < unique.size(); j++)
        {
            if(v[i] == unique[j])
            {
                found = true;
                break;
            }
        }

        if(!found)
        {
            unique.push_back(v[i]);
        }
    }

    cout << "After removing duplicates:\n";

    for(int i = 0; i < unique.size(); i++)
    {
        cout << unique[i] << " ";
    }

    return 0;
}