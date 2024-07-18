#include <iostream>
using namespace std;

int main() {
    int count;
    cin >> count;
    if (count == 1) { cout << "John";}
    else if (count == 2) { cout << "Tom";}
    else if (count == 3) { cout << "Paul";}
    else { cout << "Vacancy";}
    return 0;
}