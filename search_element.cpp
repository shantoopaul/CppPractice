#include <iostream>

using namespace std;

int main () {
    ios::sync_with_stdio(false);

    int arr[5] = {10, 30, 40, 60, 20};
    int size = sizeof(arr) / 4;
    int index = -1, target = 0;

    cout << "Array elements are: ";
    for (int i = 1; i <= size; i++) {
        cout << arr[i - 1] << ((i != size) ? ", " : "");
    }

    cout << "\nEnter the element to search for: ";
    cin >> target;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        cout << "Element " << target << " found at index: " << index << '\n';
    } else {
        cout << "Element not found!" << '\n';
    }
    return 0;
}