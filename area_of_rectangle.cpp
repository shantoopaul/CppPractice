// Exercise 2: Area of Rectangle
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    float x, y;
    cout << "Enter the length of the rectangle: ";
    cin >> x;
    cout << "Enter the width of the rectangle: ";
    cin >> y;

    cout << "The area of the rectangle is: " << x * y;
    // if (y != 0) {
    //     cout << "Quotient (Integer Division): " << x / y << '\n';
    // } else {
    //     cout << "Cannot calculate quotient: Division by zero!" << '\n';
    // }

    return 0;
}