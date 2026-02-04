#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;                 // N утга авна

    int sum = 0;              // нийлбэр
    for (int i = 1; i <= N; i++) {
        sum += i;             // 1-ээс N хүртэл нэмнэ
    }

    cout << sum << endl;      // нийлбэр
    cout << (double)sum / N;  // дундаж

    return 0;
}
