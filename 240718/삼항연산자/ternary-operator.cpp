#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;
    string result = score == 100 ? "pass" : "failure";
    cout << result << '\n';
    return 0;
}