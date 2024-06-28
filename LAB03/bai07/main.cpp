#include <iostream>
using namespace std;

void tinhChuViDienTich(double a, double b, double &chuVi, double &dienTich) {
    chuVi = 2 * (a + b);
    dienTich = a * b;
}

void veHinhChuNhat(int a, int b) {
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            if (i == 1 || i == a || j == 1 || j == b) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    double a, b, chuVi, dienTich;
    cout << "Nhap chieu dai hinh chu nhat: ";
    cin >> a;
    cout << "Nhap chieu rong hinh chu nhat: ";
    cin >> b;

    tinhChuViDienTich(a, b, chuVi, dienTich);

    cout << "Chu vi hinh chu nhat: " << chuVi << endl;
    cout << "Dien tich hinh chu nhat: " << dienTich << endl;
    cout << "Hinh chu nhat: " << endl;
    veHinhChuNhat(a, b);

    return 0;
}

