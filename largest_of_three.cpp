#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int a = 10, b = 40, c = 30;

    if (a >= b && a >= c) {
        cout << a << " is the largest number." << '\n';
    } else if (b >= a && b >= c) {
        cout << b << " is the largest number." << '\n';
    } else {
        cout << c << " is the largest number." << '\n';
    }

    cout << max(max(a, b), c) << " is the largest number." << '\n';

    return 0;
}