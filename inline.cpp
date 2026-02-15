#include<iostream>
#include<string>
using namespace std;
void multi(int, int);
int main()
{
    multi(20,30);
    return 0;
}

inline void multi(int x,int y)
{
    cout<<"multiplication of number are"<<x*y<<endl;
}