#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks:";
    cin>>marks;
    if(marks>=90 && marks<=100)
    {
        cout<<"grade A";
    }
    else if(marks>=75 && marks<90)
    {
        cout<<"grade B";
    }
    else if(marks>=60 && marks<75)
    {
        cout<<"grade C";
    }
    else if(marks>=40 && marks<60)
    {
        cout<<"grade D";
    }
    else
    {
        cout<<"grade F"<<endl;
        cout<<"better luck next time";
    }    
    return 0;
}