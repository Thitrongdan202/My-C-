#include <iostream>

using namespace std;
struct PhanSo {
    int tu;
    int mau;
};


void NhapPhanSo(PhanSo &ps) {
    cout << "Nhap tu so: ";
    cin >> ps.tu;
    cout << "Nhap mau so: ";
    cin >> ps.mau;
}


void XuatPhanSo(PhanSo ps) {
    cout << ps.tu << "/" << ps.mau;
}


int UCLN(int a, int b) {
    if (b == 0) {
        return a;
    }
    return UCLN(b, a % b);
}


void ToiGianPhanSo(PhanSo &ps) {
    int ucln = UCLN(ps.tu, ps.mau);
    ps.tu /= ucln;
    ps.mau /= ucln;
}


PhanSo CongPhanSo(PhanSo ps1, PhanSo ps2) {
    PhanSo kq;
    kq.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    kq.mau = ps1.mau * ps2.mau;
    ToiGianPhanSo(kq);
    return kq;
}


PhanSo TruPhanSo(PhanSo ps1, PhanSo ps2) {
    PhanSo kq;
    kq.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
    kq.mau = ps1.mau * ps2.mau;
    ToiGianPhanSo(kq);
    return kq;
}


PhanSo NhanPhanSo(PhanSo ps1, PhanSo ps2) {
    PhanSo kq;
    kq.tu = ps1.tu * ps2.tu;
    kq.mau = ps1.mau * ps2.mau;
    ToiGianPhanSo(kq);
    return kq;
}


PhanSo ChiaPhanSo(PhanSo ps1, PhanSo ps2) {
    PhanSo kq;
    kq.tu = ps1.tu * ps2.mau;
    kq.mau = ps1.mau * ps2.tu;
    ToiGianPhanSo(kq);
    return kq;
}
int main() {
    int choice;
    PhanSo ps1, ps2, ps3;

    do {
        cout << "\n=============== MENU ===============";
        cout << "\n1. Nhap phan so";
        cout << "\n2. Xuat phan so";
        cout << "\n3. Cong hai phan so";
        cout << "\n4. Tru hai phan so";
        cout << "\n5. Nhan hai phan so";
        cout << "\n6. Chia hai phan so";
        cout << "\n0. Thoat chuong trinh";
        cout << "\nNhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Nhap phan so 1: ";
                PhanSo(ps1);
                cout << "Nhap phan so 2: ";
                PhanSo(ps2);
                break;
            case 2:
                cout << "Phan so 1: ";
                PhanSo(ps1);
                cout << "Phan so 2: ";
                PhanSo(ps2);
                break;
            case 3:
                ps3 = congPhanSo(ps1, ps2);
                cout << "Tong hai phan so la: ";
                xuatPhanSo(ps3);
                break;
            case 4:
                ps3 = truPhanSo(ps1, ps2);
                cout << "Hieu hai phan so la: ";
                xuatPhanSo(ps3);
                break;
            case 5:
                ps3 = nhanPhanSo(ps1, ps2);
                cout << "Tich hai phan so la: ";
                xuatPhanSo(ps3);
                break;
            case 6:
                ps3 = chiaPhanSo(ps1, ps2);
                cout << "Thuong hai phan so la: ";
                xuatPhanSo(ps3);
                break;
            case 0:
                cout << "Chuong trinh ket thuc.";
                break;
            default:
                cout << "Lua chon khong hop le. Vui long thu lai!";
        }
    } while (choice != 0);

    return 0;
}
