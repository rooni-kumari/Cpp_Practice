#include<iostream>

using namespace std;

int main()

{

int arr[]={1,2,4,3,5,6,7},total=0;

int arraysize=sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<arraysize;i++)

{

total=total+arr[i];

}

cout<<total<<endl;

return 0;

}

