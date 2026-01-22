#include<iostream>
using namespace std;
int main()
{
    int num,rev=0;
    cout<<"enter a number for reverse"<<endl;
    cin>>num;
    if(num==0)
    {
        cout<<num<<endl;
    }
    else{
        while(num!=0){
        int a=num%10;
        rev=a+rev*10;
        num=num/10;
        }
    }
    cout<<rev<<endl;
}