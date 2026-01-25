#include<iostream>
using namespace std;
int main()
{
    int arr[2][2]={2,4,3,7};
    int sum=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    cout<<"sum is equal to : "<<sum<<endl;
    return 0;

}