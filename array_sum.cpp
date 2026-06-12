#include <iostream>
#include <vector>

using namespace std;

int main () {
    ios::sync_with_stdio(false);

    int size;
    long long sum = 0;

    cout << "Enter the number of elements (elements): ";
    cin >> size;
    vector<int> elements(size);
    cout << "Enter " << size << " integers:\n";

    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> elements[i];
        sum += elements[i];
    }
    cout << "The sum of all elements in the array is: " << sum;
    return 0;
}