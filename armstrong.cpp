#include<iostream>
using namespace std;
void check(int);
int main()
{
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    check(num);
    return 0;
}

void check(int x)
{
    int rem, sum=0, temp;
    temp=x;
    if(x==0)
    {
       cout<<"enter valid number"<<endl;
    }
    else
    {
    while(x!=0)
    {
       rem=x%10;
       sum=sum+(rem*rem*rem);
       x/=10;
    }}
    if(sum==temp)
    {
        cout<<"number is an armstrong number"<<endl;
    }
    else
    {
        cout<<"number not an armstrong number"<<endl;
    }
}