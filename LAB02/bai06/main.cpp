#include <iostream>

using namespace std;

int main()
{
    int g = 9, p = 16, gi = 59;
    cout << "Nhap gio: " << g << endl;

    cout << "Nhap phut: " << p << endl;

    cout << "Nhap giay: " << gi << endl;


    if (g < 0 || g > 23) {
        cout << "Gio khong hop le" << endl;
    } else if (p < 0 || p > 59) {
        cout << "Phut khong hop le" << endl;
    } else if (gi < 0 || gi > 59) {
        cout << "Giay khong hop le" << endl;
    } else {
        cout << "Gio, phut, giay hop le" << endl;
    }
    return 0;
}
