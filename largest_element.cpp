#include <iostream>

using namespace std;

int main () {
    ios::sync_with_stdio(false);

    int arr[6] = {10, 30, 40, 60, 20, 80};
    int size = sizeof(arr) / 4;
    int largest_num = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest_num) {
            largest_num = arr[i];
        }
    }
    cout << "The largest element in the array is: " << largest_num;
    return 0;
}