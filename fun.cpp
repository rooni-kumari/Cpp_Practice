#include<iostream>
using namespace std;
int add(int a, int b);
int main()
{
    int x,y;
    cout<<"enter any two number"<<endl;
    cin>>x>>y;
    int sum=add(x,y);
    cout<<sum;
    return 0;
}

int add(int a, int b)
{
    return a+b;
}