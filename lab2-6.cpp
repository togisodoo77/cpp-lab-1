#include <iostream>
using namespace std;

int main() {
    int *p = new int;
    *p = 10;

    cout << "Value: " << *p << endl;

    delete p;
    p = nullptr;

    return 0;
}
