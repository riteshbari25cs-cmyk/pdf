#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, string> student;

    cout << "Enter Roll Number: ";
    cin >> student.first;

    cout << "Enter Name: ";
    cin >> student.second;

    cout << "\nStudent Record\n";
    cout << "Roll Number: " << student.first << endl;
    cout << "Name: " << student.second << endl;

    return 0;
}