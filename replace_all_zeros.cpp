#include <iostream>

using namespace std;

int main () {
    ios::sync_with_stdio(false);

    int arr[] = {1, 0, 5, 0, 8, 0, 2};
    int size = std::size(arr);

    cout << "Original array: ";
    for (int num: arr) {
        cout << num << " ";
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            arr[i] = -1;
        }
    }

    cout << "\nModified array: ";
    for (int num: arr) {
        cout << num << " ";
    }
    return 0;
}