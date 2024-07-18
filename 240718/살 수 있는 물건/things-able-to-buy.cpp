#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 3000) { cout << "book" << '\n';}
    else if (n >= 1000) { cout << "mask" << '\n';}
    else { cout << "no" << '\n';}
    return 0;
}