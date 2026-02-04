#include <iostream>
using namespace std;

int main() {
    int a, b, c;              // 3 тоо зарлаж байна
    cin >> a >> b >> c;       // гараас утгууд авна

    int max = a;              // эхлээд a-г хамгийн их гэж үзнэ
    if (b > max) max = b;     // b их бол max = b
    if (c > max) max = c;     // c их бол max = c

    cout << max;              // хамгийн их утгыг хэвлэнэ
    return 0;
}
