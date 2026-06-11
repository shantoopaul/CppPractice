#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int num = 10;
    string checker = (num % 2 == 0) ? "EVEN" : "ODD";

    cout << num << " is an " << checker << " number";
    return 0;
}