#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int num = 0, size = 0;

    do {
        size++;
        num /= 10;
    } while (num);

    cout << "The number of digits in " << num << " is: " << size << '\n';
    return 0;
}