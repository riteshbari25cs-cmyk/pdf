#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter any three numbers:";
    cin>>a>>b>>c;
    if(a>b &&  a>c)
    {
        cout<<a<<"is a largest number";
    }
    else if(b>a && b>c)
    {
        cout<<b<<"is a largest number";
    }
    else
    {
        cout<<c<<"is a largest number";
    }
    return 0;
}
