#include <iostream>

using namespace std;

int main () {
    ios::sync_with_stdio(false);

    int length;

    cout << "Enter the side length of your square: ";
    cin >> length;

    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= length; j++) {
            cout << "* ";
        }
        cout << '\n';
    }
    return 0;
}