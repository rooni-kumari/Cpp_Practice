#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,8,15,6,2,9,1};
    int arraysize = 0;
    arraysize = sizeof(arr) / sizeof(arr[0]);
    cout<<"length of array is :"<<arraysize<<endl;

    //sorting
    for(int j=0;j<arraysize;j++)
    {
        for(int i = 0; i < arraysize; i++)
        {
            if(arr[i] < arr[i+1])
            {
                int temp=0;
                temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;

            }
        }
    }
    cout<<"2nd highest value is "<<arr[1]<<endl;
    return 0;

}