#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int year = 2016;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << year << " is a Leap Year." << '\n';
    } else {
        cout << year << " is NOT a Leap Year." << '\n';
    }
    return 0;
}