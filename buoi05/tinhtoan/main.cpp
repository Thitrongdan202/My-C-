#include <iostream>

using namespace std;

/*viết hàm tổng 2 số
input:
    + số thứ nhất
    + số thứ hai

output:
    + kết quả tổng =>
*/

int tong(int a, int b)
{
    int kq;
    kq = a + b;

    //cout << " Ket qua: " << kq << endl;
    return kq;
}

/*viết hàm hiệu 2 số
input:
    + số thứ nhất >> cin
    + số thứ hai << cin

output:
    + kết quả hiệu => return
*/

int hieu()
{
    int a, b, kq;
    cout << "Nhap lan luot 2 so: ";
    cin >> a >> b ;

    kq = a - b;

    //cout << " Ket qua: " << kq << endl;
    return kq;
}

int main()
{
    int a = 4 , b = 5, c = 6, d = 7, f;

    int e = tong(a, b);
    f = tong(c, d);

    cout << "Ket qua: " << e << endl;
    cout << "Ket qua: " << f << endl;

    f = hieu();

    cout << "Ket qua: " << f << endl;


    return 0;
}
