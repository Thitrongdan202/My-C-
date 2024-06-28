#include <iostream>
#include <string>

using namespace std;

// Khai báo cấu trúc SinhVien
struct SinhVien {
    int maSV;
    string hoTen;
    string gioiTinh;
    string diaChi;
    double diemToan;
    double diemLy;
    double diemHoa;
};

// Hàm nhập thông tin của một sinh viên
void NhapSinhVien(SinhVien& sv) {
    cout << "Nhap ma sinh vien: ";
    cin >> sv.maSV;
    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, sv.hoTen);
    cout << "Nhap gioi tinh (nam/nu): ";
    getline(cin, sv.gioiTinh);
    cout << "Nhap dia chi: ";
    getline(cin, sv.diaChi);
    cout << "Nhap diem Toan: ";
    cin >> sv.diemToan;
    cout << "Nhap diem Ly: ";
    cin >> sv.diemLy;
    cout << "Nhap diem Hoa: ";
    cin >> sv.diemHoa;
}

// Hàm xuất thông tin SV.
void XuatSinhVien(const SinhVien& sv) {
    cout << "Ma sinh vien: " << sv.maSV << endl;
    cout << "Ho ten: " << sv.hoTen << endl;
    cout << "Gioi tinh: " << sv.gioiTinh << endl;
    cout << "Dia chi: " << sv.diaChi << endl;
    cout << "Diem Toan: " << sv.diemToan << endl;
    cout << "Diem Ly: " << sv.diemLy << endl;
    cout << "Diem Hoa: " << sv.diemHoa << endl;
}

int main() {
    // Tạo một sinh viên và nhập thông tin
    SinhVien sv;
    NhapSinhVien(sv);

    // Xuất thông tin sinh viên
    cout << "\nThong tin sinh vien:\n";
    XuatSinhVien(sv);

    return 0;
}
