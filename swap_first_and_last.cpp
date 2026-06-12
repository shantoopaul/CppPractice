#include <iostream>

using namespace std;

int main () {
    ios::sync_with_stdio(false);

    int arr[] = {10, 20, 30, 40, 50};
    int size = std::size(arr);

    cout << "Array BEFORE swap: ";
    for (int num: arr) {
        cout << num << " ";
    }

    swap(arr[0], arr[size - 1]);

    cout << "\nArray AFTER swap: ";
    for (int num: arr) {
        cout << num << " ";
    }
    return 0;
}