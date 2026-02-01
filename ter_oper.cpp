#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int greatest = (a > b) ? a : b;

    cout << "Greatest number is: " << greatest;

    return 0;
}
