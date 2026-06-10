// Exercise 2: Area of Rectangle
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    float length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    cout << "The area of the rectangle is: " << length * width;
    return 0;
}