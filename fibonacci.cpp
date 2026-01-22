#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    int a=0,b=1;
    for(int i=0;i<num;i++)
    {
        cout<<a<<" ";
        int next=a+b;
        a=b;
        b=next;
    }
    return 0;
}