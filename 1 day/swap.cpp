#include<iostream>
using namespace std;
int main ()
{ 
    int a,b,c;
    cout<<"enter the first number";
    cin>>a;
    cout<<"enter the second number";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"after swapping:a="<<a<<" b="<<b<<endl;
    return 0;
}