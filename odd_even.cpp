#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number for check"<<endl;
    cin>>num;
    if(num==0)
    {
        cout<<"enter a valid number"<<endl;

    } 
    else if (num%2!=0)
    {
        cout<<"Odd number"<<endl;
    }
    else{
        cout<<"Even number"<<endl;
    }
    return 0;
}