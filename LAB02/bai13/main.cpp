#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Nhap vao ba so nguyen duong: ";
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Ba so nhap vao phai la so nguyen duong!" << endl;
    } else if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Ba so nhap vao khong lap thanh tam giac!" << endl;
    } else if (a == b && b == c) {
        cout << "Day la tam giac deu!" << endl;
    } else if (a == b || a == c || b == c) {
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "Day la tam giac vuong can!" << endl;
        } else {
            cout << "Day la tam giac can!" << endl;
        }
    } else {
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "Day la tam giac vuong!" << endl;
        } else {
            cout << "Day la tam giac thuong!" << endl;
        }
    return 0;
}
}
