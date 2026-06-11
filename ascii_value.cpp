#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    char ch;

    cout << "Enter a single character: ";
    cin >> ch;
    cout << "The ASCII value of '" << ch << "' is: " << static_cast<int>(ch);
    return 0;
}