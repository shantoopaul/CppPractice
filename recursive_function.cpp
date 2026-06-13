#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    ios::sync_with_stdio(false);

    int n = 5;
    cout << n << "! is: " << factorial(n) << '\n';

    return 0;
}