#include<iostream>
#include<string>
using namespace std;
int main()
{
    string firstname,lastname,address;
    cout<<"enter first name "<<endl;
    getline(cin,firstname);
    cout<<"enter last name "<<endl;
    getline(cin,lastname);

    cout<<"enter your address "<<endl;
    getline(cin,address); 
     
    string fullname=firstname+" "+lastname;
    
    cout<<fullname<<endl;
    cout<<address<<endl;
    return 0;

}