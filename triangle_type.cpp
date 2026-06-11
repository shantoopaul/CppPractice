#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    // sides of triangle
    float a = 1.1, b = 1.1, c = -1;

    if (a + b <= c || b + c <= a || a + c <= b) {
        cout << "This is anything but a triangle /_\\." << '\n';
    } else if (a == b && a == c) {
        cout << "The triangle is Equilateral." << '\n';
    } else if (a == b || a == c) {
        cout << "The triangle is Isosceles." << '\n';
    } else {
        cout << "The triangle is Scalene." << '\n';
    }
    return 0;
}