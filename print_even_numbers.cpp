#include <iostream>

using namespace std;

int main () {
    ios::sync_with_stdio(false);

    int arr[] = {1, 6, 3, 8, 5, 10, 7};
    int size = std::size(arr);

    cout << "The even numbers in the array are: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << ((i < size - 2) ? ", " : "");
        }
    }
    return 0;
}