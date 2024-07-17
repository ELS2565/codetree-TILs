#include <iostream>
using namespace std;

int main() {
    string s, t, tmp;
    cin >> s >> t;

    tmp = s;
    s = t;
    t = tmp;

    cout << s << '\n' << t;

    return 0;
}