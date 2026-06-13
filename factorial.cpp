#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int n = 5;
    long long fact = 1;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << '\n';
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial of " << n << " is: " << fact;
    return 0;
}