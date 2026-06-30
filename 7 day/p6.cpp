#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 elements: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int *start = arr;
    int *end = arr + 4;

    while(start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "Reversed Array: ";

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}