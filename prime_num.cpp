#include<iostream>
using namespace std;
int main()
{
    int num,total=0;
    cout<<"enter a number for check"<<endl;
    cin>>num;
    if((num==0)||(num==1))
    {
    	cout<<"invalid number"<<endl;
	}
	else{
	    for(int i=2;i<=num;i++)
	    {
	        if(num%i==0)
	        {
	            total=total+1;
	        }
	    }
	    if(total<2)
	    {
	        cout<<"Prime number"<<endl;
	    }
	    else 
	    {
	        cout<<"Not Prime"<<endl;
	    }
	}
    return 0;
}