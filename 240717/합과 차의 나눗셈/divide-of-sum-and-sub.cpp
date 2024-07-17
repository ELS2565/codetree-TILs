#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double r1 = a + b;
    double r2 = a - b;
    double result;
    result = r1 / r2;

    cout << fixed;
    cout.precision(2);
    cout << result << '\n';
    return 0;
}