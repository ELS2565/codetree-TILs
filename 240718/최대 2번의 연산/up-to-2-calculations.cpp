#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if (a % 2 == 0) { a /= 2;}
    if (a % 2 != 0) { a = (a + 1)/2; }

    cout << a << '\n';
    return 0;
}