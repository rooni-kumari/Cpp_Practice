#include<iostream>
using namespace std;
int main()
{
    int m=6,n=6;
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        n--;

    }
    return 0;
}