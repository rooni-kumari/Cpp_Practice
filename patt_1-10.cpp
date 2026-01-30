#include<iostream>
using namespace std;
int main()
{
    int m=6,n=6;
    int b=1;
    for(int i=1;i<=m;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            cout<<b<<" ";
            b++;
        }
        cout<<endl;
        

    }
    return 0;
}