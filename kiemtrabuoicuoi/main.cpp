#include <iostream>

using namespace std;

// bài 1
/*cau 1 tong với giá trị lần lượt bằng 10, 15, 500
Input:
     + int n
     + float
Output:
     + return kq
*/
float tinh(int n)
{
    float tong = 1;
    for (int i = 2; i <= n + 1; i++) {
        int p = 1;
        for (int j = 1; j <= i - 1; j++) {
            p *= j;
        }
        tong += p * i;
    }
}
/* cau 2 kiemtra chan le voi các gia tri lần lượt bằng 81, -90, 100
Input:
     + float int n
Output:
     + return kq
*/
float kiemTraChanLe(int n) {
    if (n % 2 == 0) {
        return -1;
    } else {
        return 0;
    }
}

// bài 2
/*câu 1 hàm xuất in tất cả phần tử có trong mảng
*/
void xuat(float arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " \t ";
    }
    cout << endl;
}
/* cau 2 tong am duong
Input:
     + mang float a[]
     + so luong n
Output:
     + return kq
*/
void tongAmDuong(float arr[], int n, float &Am, float &Duong) {
    Am = 0;
    Duong = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            Am += arr[i];
        }
        else {
            Duong += arr[i];
        }
    }
}
/* cau 3 tinh trung bình
Input:
     + float
     + so luong n
Output:
     + return kq
*/
float tinhTBLe(float arr[], int n) {
    int tongLe = 0;
    int demLe = 0;
    for (int i = 0; i < n; i++) {
        if ((int)arr[i] % 2 == 1) {
            tongLe += arr[i];
            demLe++;
        }
    }
    if (demLe == 0) {
        return 0;
    }
    return (float)tongLe / demLe;
}
// bai 3
/* cau 1 xuat ma tran
*/
void Matrix(float ma[][5], int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            cout << ma[i][j] << "\t";
        }
        cout << endl;
    }
}
/* cau 2 tim gia trị lẻ lớn nhất
Input:
     + nhap int float
     + so luong ma[]
Output:
     + khong thay trả về -1
     + returt kq
*/
int Max(float ma[][5], int dong, int cot) {
    float maxOdd  = -9999.0;
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            int intPart = (int)ma[i][j];
            if (intPart % 2 == 1 && ma[i][j] > maxOdd ) {
                maxOdd  = ma[i][j];
            }
        }
    }
    if (maxOdd  == -9999.0) {
        return -1;
    }
    return maxOdd ;
}
// bai 4
/* câu 1
*/


int main()
{

































    cout << "Bai 1" << endl;
    cout << "Cau 1" << endl;
    cout << "Voi n =10. Ket qua = " << tinh(10) << endl;
    cout << "Voi n =15. Ket qua = " << tinh(15) << endl;
    cout << "Voi n =500. Ket qua = " << tinh(500) << endl;
    cout << "\ncau 2" << endl;
    cout << "Voi n =81. Ket qua = " << kiemTraChanLe(81) << endl;
    cout << "Voi n =-90. Ket qua = " << kiemTraChanLe(-90) << endl;
    cout << "Voi n =100. Ket qua = " << kiemTraChanLe(100) << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Bai 2" << endl;
    float arr[100] = {16.2, 99.4, -51.6, 98.5, -79.6, 68.3, -34.8, 91.6, -97.4, 40.8};
    int n = 10;
    cout << "cau 1 \n "<< endl;
    xuat (arr, n);
    cout << "Cau 2" << endl;

    float Am, Duong;
    tongAmDuong(arr, n, Am, Duong);
    cout << "Tong cac so am = " << Am << endl;
    cout << "Tong cac so duong = " << Duong << endl;
    cout << "Cau 3" << endl;
    cout << "Trung binh le = " << tinhTBLe(arr, n) << endl ;
    cout << "--------------------------------------------" << endl;
    cout << "bai 3" << endl;
    float ma[5][5] = {
    {10, 4.4, 8.9, 2.6, 6.3},
    {5.5, 5.8, 3.5, 1.5, 9.4},
    {1.4, 4.5, 7.3, 8.7, 7.4},
    {6.9, 3.4, 1.1, 9.8, 6.9},
    {5.0, 2.2, 5.3, 7.7, 1.9}
};
     cout << "cau 1:\n " << endl;
     Matrix(ma, 5, 5);
     cout << "cau 2 \n" << endl;
    int maxOdd = Max(ma, 5, 5);
    if (maxOdd == -1) {
        cout << "Khong tim thay gia tri le trong ma tran." << endl;
    }
    else {
        cout << "Gia tri le lon nhat trong ma tran: " << maxOdd << endl;
    }
    cout << "--------------------------------------------" << endl;
    cout << "bai 4" << endl;
    cout << "cau 1" << endl;

    cout << "cau 2 \n" << endl;


    return 0;
}
