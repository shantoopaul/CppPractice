#include <iostream>

using namespace std;

int main () {
    ios::sync_with_stdio(false);

    int a = 10, b = 10, tempA = a, tempB = b, temp;

    while (tempB != 0) {
        temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }
    cout << "The GCD of " << a << " and " << b << " is: " << temp;
    return 0;
}