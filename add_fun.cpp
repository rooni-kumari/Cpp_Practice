#include<iostream>
#include<string>
using namespace std;

void add(int, int );
void add(float, float );

int main()
{
    add(3 , 4);
    add(3.4f , 4.3f);
    return 0;

}

void add(int x,int y)
{
    cout<<"add of 2 int number is "<< x+y <<endl;

}

void add(float x,float y)
{
     cout<<"add of 2 float number is "<< x+y <<endl;;
}
