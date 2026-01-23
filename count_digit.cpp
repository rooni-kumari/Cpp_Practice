#include<iostream>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"enter a number"<<endl;
    cin>>num;
    if(num==0)
    {
        cout<<"1"<<endl;

    }
    else{
        while(num!=0)
        {
            int a=num%10;
            count++;
            num=num/10;
        }
    }
    cout<<count<<endl;
    return 0;
}