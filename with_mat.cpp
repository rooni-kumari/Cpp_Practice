#include<iostream>
using namespace std;
int main()
{
    int m=5,n=5;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<(char)(i+65);
        }
        cout<<endl;
    }
    return 0;

}