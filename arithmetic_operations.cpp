// Exercise 1: Arithmetic Operations
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int num1, num2;

    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    cout << "\nResults:\n"
         << "Sum: " << num1 + num2 << '\n'
         << "Difference: " << num1 - num2 << '\n'
         << "Product: " << num1 * num2 << '\n';

    if (num2 != 0) {
        cout << "Quotient (Integer Division): " << num1 / num2 << '\n';
    } else {
        cout << "Cannot calculate quotient: Division by zero!" << '\n';
    }
    return 0;
}