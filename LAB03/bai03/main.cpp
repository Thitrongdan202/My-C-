#include <iostream>
using namespace std;

int kiemtra() {
    int value;
    do {
        cout << "Nhap gia tri: ";
        cin >> value;
    } while (value < -89 || value > 90);
    return value;
}

int main() {
    int value = kiemtra();
    cout << "Gia tri hop le: " << value << endl;
    return 0;
}
