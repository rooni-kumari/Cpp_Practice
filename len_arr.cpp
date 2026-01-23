#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,1,3,5,2,6,7,8};
    int arraysize=0;
    arraysize=sizeof(arr)/sizeof(arr[0]);
    cout<<"size of array is : "<<arraysize<<endl;
    return 0;
}