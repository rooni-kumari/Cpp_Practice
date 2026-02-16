#include<iostream>
using namespace std;
int myfactorial(int num);
int main()
{
    int number=6;
    cout<<"factorial is "<<myfactorial(number);
    
    return 0;
}


int myfactorial(int num)
{
    int fact=1;
    if(num==0)
    {
        return 1;
    }
    else if(num<0)
    {
        cout<<"enter valid number"<<endl;
    }
    else{
        for(int i=num;i>0;i--)
        {
            fact=num*myfactorial(num-1);
            
        }
    }
	return fact;    
}