#include<iostream>
using namespace std;
class A
{
    public:
    int instanceVar;
    A(int val)
    {
        instanceVar= val;
    }
    void display()
    {
        cout<< instanceVar << endl;
    }
};
int main()
{
    A a1(1);
    a1.display();

    A a2(33);
    a2.display();
    return 0;

}