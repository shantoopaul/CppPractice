#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int score;

    cout << "Enter the student's score (0 - 100): ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Invalid score :/" << '\n';
    } else if (score >= 90) {
        cout << "Grade: A" << '\n';
    } else if (score >= 80) {
        cout << "Grade: B" << '\n';
    } else if (score >= 70) {
        cout << "Grade: C" << '\n';
    } else if (score >= 60) {
        cout << "Grade: D" << '\n';
    } else {
        cout << "Grade: F" << '\n';
    }
    return 0;
}