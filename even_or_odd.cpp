#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int num = 9;

    if (num % 2 == 0) {
        cout << num << " is an EVEN number." << '\n';
    } else {
        cout << num << " is an ODD number." << '\n';
    }

    cout << num << ((num % 2 == 0) ? " is an EVEN number." : " is an ODD number.");
    return 0;
}