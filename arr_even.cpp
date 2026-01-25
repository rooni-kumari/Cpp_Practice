#include<iostream>
using namespace std;
int main()
{
    int arr[]= {1,2,4,2,5,7,9,3,4,8,0};
    int count=0;
    int arraysize=sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<arraysize;i++)
    {
        if(arr[i]==0)
        {

        }
        else if(arr[i]%2==0)
        {
            count++;
        }
    }
    
    cout<<"even numbers are : "<<count<<endl;
    return 0;
}