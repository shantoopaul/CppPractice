#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int n = 93;
    long long a = 0, b = 1, prev = 0;

    if (n <= 0) {
        cout << "No Fibonacci Series for u :p";
        return 0;
    }

    cout << "Fibonacci Series: ";

    if (n >= 1) {
        cout << a;
    }
    if (n >= 2) {
        cout << ", " << b;
    }

    for (int i = 1; i < n - 1; i++) {
        prev = a + b;
        cout << ", " << prev;

        a = b;
        b = prev;
    }
    return 0;
}