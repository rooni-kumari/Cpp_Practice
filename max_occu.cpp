#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,3,2,5,3,6,4,7,3,8,0,6,9};
    int arraysize=0,maxocc=0,count=1,maxcount=0;
    arraysize=sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<arraysize;j++)
    {
        for(int i=j+1;i<arraysize;i++)
        {
            if(arr[j]==arr[i])
            {
                count++;
            }
        }
        if(count>maxcount)
        {
            maxcount=count;
            maxocc=arr[j];
        }
        count=1;
    }
    cout<<"max occuring element is : "<<maxocc<<endl;
    cout<<"time is occur is : "<<maxcount<<endl;
    return 0;
}