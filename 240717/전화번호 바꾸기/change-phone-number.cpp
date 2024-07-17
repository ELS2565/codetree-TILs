#include <iostream>
using namespace std;

int main() {
    string tel;
    cin >> tel;

    string sub, sub2;
    sub = tel.substr(4,4);
    sub2 = tel.substr(9,4);

    tel.replace(4, 4, sub2);
    tel.replace(9, 4, sub);
    cout << tel << '\n';
    return 0;
}