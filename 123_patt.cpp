//program to print pattern //

#include<iostream>
using namespace std;
int main()
{
    int m=6,n=6;
    
    for(int i=1;i<=m;i++)
    {
        int b=1;
        for(int j=1;j<=i;j++)
        {
            cout<<b;
            b=b+1;

        }
        cout<<endl;
        

    }
    return 0;
}
