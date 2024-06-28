#include <iostream>

using namespace std;

int main()
{
    int km;
    double gia;

    cout << "Nhap so km da di: ";
    cin >> km;

    if (km <= 0) {
        cout << "So km nhap vao khong hop le.";
        return 0;
    } else if (km == 1) {
        gia = 15000;
    } else if (km <= 5) {
        gia = 15000 + (km - 1) * 13500;
    } else if (km <= 120) {
        gia = 15000 + 4 * 13500 + (km - 5) * 11000;
    } else {
        gia = (15000 + 4 * 13500 + 115 * 11000) * 0.9;
        gia += (km - 120) * 11000;
    }

    cout << "Tong tien cuoc taxi la: " << gia << " dong";

    return 0;
}
