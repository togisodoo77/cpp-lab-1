#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100], count = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0)     // тэгш эсэх
            count++;
    }

    cout << count;
    return 0;
}
