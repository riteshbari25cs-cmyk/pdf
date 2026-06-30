#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si;
    cout<<"enter the principle amount";
    cin>>p;
    cout<<"enter the rate of intrest";
    cin>>r;
    cout<<"enter the time";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"simple intrest is:"<<si<<endl;
    return 0;
}