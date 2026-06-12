#include <iostream>

using namespace std;

int main () {
    ios::sync_with_stdio(false);

    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = std::size(arr);

    cout << "Original Array: ";
    for (int i = 1; i <= size; i++) {
        cout << arr[i - 1] << ((i < size) ? ", " : "");
    }

    cout << "\nReversed Array: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << ((i > 0) ? ", " : "");
    }
    return 0;
}