#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp;
    temp= *x;
    *x =*y ;
    *y = temp;

}
int main()
{
    int a,b;
    cout<<"enter two number "<<endl;
    cin>>a>>b;
    cout<<"before swap a : "<<a<<" b : "<<b<<endl;
    swap(&a, &b);
    cout<<"after swap a : "<<a<<" b : "<<b<<endl;
    return 0;
}