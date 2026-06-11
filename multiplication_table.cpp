#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int n = 3;

    cout << "Multiplication Table for " << n << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << '\n';
    }
    return 0;
}