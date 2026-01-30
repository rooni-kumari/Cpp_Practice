#include<iostream>
using namespace std;
int main()
{
    int a[5][5];
    int b=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(b%2==0)
            {
              b=0;  
            }
            cout<<b;
            b++;
        }
        cout<<endl;
    }
    return 0;
}