#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, delta, x1, x2;

    cout << "Nhap vao cac he so a, b, c cua phuong trinh: ";
    cin >> a >> b >> c;

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        cout << "Phuong trinh vo nghiem" << endl;
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        cout << "Phuong trinh co nghiem kep x = " << x1 << endl;
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Phuong trinh co hai nghiem phan biet:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    if (a == 0 && b == 0 && c == 0) {
        cout << "Phuong trinh vo so nghiem" << endl;
    } else if (a == 0 && b == 0 && c != 0) {
        cout << "Phuong trinh vo nghiem" << endl;
    } else if (a == 0) {
        cout << "Phuong trinh la phuong trinh bac nhat" << endl;
        cout << "Nghiem cua phuong trinh la: " << -c / b << endl;
    } else {
        cout << "Phuong trinh la phuong trinh bac hai" << endl;
    }

    return 0;
}
