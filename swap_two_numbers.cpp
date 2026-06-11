#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int a = 10, b = 20;

    cout << "Before swap: a = " << a << ", b = " << b << '\n';

    // int temp = a;
    // a = b;
    // b = temp;

    a = a + b;
    b = a - b;
    a = a - b;

    // swap(a, b);

    cout << "After swap: a = " << a << ", b = " << b << '\n';
    return 0;
}