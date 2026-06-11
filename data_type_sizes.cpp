#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    cout << "Size of char: " << sizeof(char) << " byte(s)" << '\n';
    cout << "Size of int: " << sizeof(int) << " byte(s)" << '\n';
    cout << "Size of float: " << sizeof(float) << " byte(s)" << '\n';
    cout << "Size of double: " << sizeof(double) << " byte(s)" << '\n';
    return 0;
}