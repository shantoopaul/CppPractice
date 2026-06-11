#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int n = 10;

    cout << "Sum of the first natural numbers up to " << n << " is: " << (n * (n + 1)) / 2;
    return 0;
}