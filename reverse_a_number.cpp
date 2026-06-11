#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int og = 12345, rev = 0;

    while (og) {
        rev *= 10;
        rev += og % 10;
        og /= 10;
    }
    cout << rev << '\n';
    return 0;
}