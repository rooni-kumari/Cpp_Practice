#include<iostream>
using namespace std;
namespace N
{
    int namespaceVar =10;
}
int main()
{
    cout<<N::namespaceVar;

    return 0;
}