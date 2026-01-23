#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,6,4,5,8,5};
    int arraysize =sizeof(arr)/sizeof(arr[0]);
    cout<<"size of array is "<<endl;
    for(int j=0;j<arraysize;j++)
    {
        for(int i=0;i<arraysize;i++)
        {
             if(arr[i]>arr[i+1])
             {
                int min=0;
                min=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=min;
               
            }
        }
    }   
    cout<<"minimum number is "<<arr[0]<<endl;
    
    return 0;
}