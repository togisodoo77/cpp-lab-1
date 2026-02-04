#include <iostream>
using namespace std;

// хэрэглэгчийн функц
double area(double a, double b) {
    return a * b;             // талбай буцаана
}

int main() {
    double x, y;              // талууд
    cin >> x >> y;            // гараас авна

    cout << area(x, y);       // функц дуудаж хэвлэнэ
    return 0;
}
