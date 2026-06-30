#include<iostream>
using namespace std;
int main()
{
    float a,b;
    char op;
     
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter oprator:";
    cin>>op;
    cout<<"enter secound numbre:";
    cin>>b;
    switch(op)
    { 
        case '+':
        cout<<"the sum is:"<<a+b;
        break;
        case '-':
        cout<<"the substraction is:"<<a-b;
        break;
        case '*':
        cout<<"the multiplication is:"<<a*b;
        break;
        case '/':
        cout<<"the division is:"<<a/b;
        break;
        default:
        cout<<"invalide oprator";
    }
return 0;
}