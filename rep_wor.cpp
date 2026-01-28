/* WAP to replace a word from the string*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string var1;
    cout<<"enter your string"<<endl;
    getline(cin,var1);

    while(var1.find("why") != string::npos)
       var1.replace(var1.find("why"),3,"what");

    cout<<var1;
    return 0;
}