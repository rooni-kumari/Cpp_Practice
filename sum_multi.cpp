#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int sum=0;
    int multi=1;
    int arraysize=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<arraysize;i++)
    {
        if(arr[i]==0)
        {
            
        }
        else if(arr[i]!=0)
        {
            sum=sum+arr[i];
            multi=multi*arr[i];

        }
    }
    cout<<"sum is : "<<sum<<endl;
    cout<<"multi is : "<<multi<<endl;
    return 0;

}