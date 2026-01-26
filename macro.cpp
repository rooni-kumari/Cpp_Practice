#include<iostream>
using namespace std;
int main()
{
    // use of predefine macro
    // Macros are shortcuts or placeholders that the preprocessor replaces before the code is compiled. They are defined using #define and can be used to create constants or code snippets.
    cout<<"this is line macro in "<<__LINE__ <<" for example "<<endl;

    cout<<"on "<<__DATE__ <<endl;
    return 0;
}