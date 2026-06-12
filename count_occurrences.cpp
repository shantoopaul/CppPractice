#include <iostream>

using namespace std;

int main () {
    ios::sync_with_stdio(false);

    int arr[] = {1, 3, 2, 3, 4, 3, 5};
    int size = sizeof(arr) / 4;
    int target = 3, count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count ++;
        }
    }
    cout << "The number " << target << " occurs " << count << " times.";
    return 0;
}