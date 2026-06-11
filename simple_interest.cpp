#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    float principal = 1000, rate = 10, time = 3;

    cout << "Simple Interest (SI) is: " << (principal * rate * time) / 100.0;
    return 0;
}