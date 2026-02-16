#include<iostream>
using namespace std;
int x=3;
int main()
{
    int x=5;
    cout<<"local x is "<<x<<endl;
    cout<<"global x is "<< ::x<<endl;
    return 0;
}