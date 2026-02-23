#include <iostream>
using namespace std;

int main() {
    int x = 50;
    int *p = &x;

    cout << "x = " << x << endl;
    cout << "*p = " << *p << endl;

    *p = 100;
    cout << "x after modification via pointer = " << x << endl;

    return 0;
}
