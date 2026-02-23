#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int &ref = a;

    ref = 20;
    cout << "Value of a after reference change: " << a << endl;

    return 0;
}
