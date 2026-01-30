#include<iostream>
using namespace std;
int main()
{
    int arr[5][5];
    
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<(char)(i+64);
        }
        cout<<endl;
    }
    return 0;
}