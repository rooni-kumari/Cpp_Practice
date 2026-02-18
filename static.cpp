#include<iostream>
using namespace std;
class A
{
    public:
    static int staticVar;
};
int A::staticVar=1;

int main()
{
    cout<< A::staticVar;
    return 0;
}