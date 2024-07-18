#include <iostream>
using namespace std;

int main() {
    double a;
    cin >> a;
    if (a >= 1.0) { cout << "High" << '\n';}
    else if (a >= 0.5) { cout << "Middle" << '\n';}
    else { 
        cout << "Low" << '\n';
    }
    return 0;
}