#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* p = &a;

    cout << a << endl;   // 10
    cout << &a << endl;  // address of a
    cout << p << endl;   // same address
}