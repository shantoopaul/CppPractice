// Exercise 1: Arithmetic Operations
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int int1, int2;

    cout << "Enter the first integer: ";
    cin >> int1;
    cout << "Enter the second integer: ";
    cin >> int2;

    cout << "\nResults:\n"
         << "Sum: " << int1 + int2 << '\n'
         << "Difference: " << int1 - int2 << '\n'
         << "Product: " << int1 * int2 << '\n';

    if (int2 != 0) {
        cout << "Quotient (Integer Division): " << int1 / int2 << '\n';
    } else {
        cout << "Cannot calculate quotient: Division by zero!" << '\n';
    }
    return 0;
}