#include <iostream>
using namespace std;

int main() {
    int A1, A2, B1, B2;
    cin >> A1 >> A2 >> B1 >> B2;
    cout << ((A1 > B1) && (A2 > B2)) << '\n';
    return 0;
}