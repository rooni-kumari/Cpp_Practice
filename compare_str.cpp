/* write a program to compare two string*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
   string val1,val2;
   cout<<"enter your string"<<endl;
   getline(cin,val1);
   cout<<"enter your second string"<<endl;
   getline(cin, val2);
    if(val1==val2)
    {
        cout<<"equal string"<<endl;
    }
    else 
    {
        cout<<"not equal string"<<endl;
    }
    return 0;
}