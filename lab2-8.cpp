#include <iostream>
using namespace std;

int main() {
    int a = 125;
    int *p = &a;

    cout << "Pointer address: " << p << endl;
    cout << "Value via pointer: " << *p << endl;

    p++;

    cout << "Pointer after increment: " << p << endl;
    cout << "Value after increment (undefined): " << *p << endl;

    return 0;
}
