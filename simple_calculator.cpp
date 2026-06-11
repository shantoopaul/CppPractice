#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
            break;
        case '/':
            if (num2 == 0) {
                cout << "Division By Zero!";
                break;
            }
            cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n';
            break;
        default:
            cout << "Invalid operator!";
    }
    return 0;
}