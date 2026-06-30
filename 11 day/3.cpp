#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    map<int, int> freq;

    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int element;

    for(auto x : freq)
    {
        if(x.second > maxFreq)
        {
            maxFreq = x.second;
            element = x.first;
        }
    }

    cout << "\nMost Frequent Element = " << element << endl;
    cout << "Frequency = " << maxFreq << endl;

    return 0;
}