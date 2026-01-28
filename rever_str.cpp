/* WAP to reverse a string */
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string var1;
    cout<<"enter first string"<<endl;
    getline(cin,var1);

   
    for(int i=var1.size();i>=0;i--)
    {
        cout<<var1[i];
    }
    return 0;
}