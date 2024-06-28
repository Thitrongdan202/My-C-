#include <iostream>

using namespace std;

/* Viết hàm tính tổng và hiệu 2 số

Input:
   + số thứ nhất
   + số thứ 2
Output:
   + kết quả tổng => ref
   + kết quả hiệu => &

*/
int d, a;
void tinh(int a, int b, int& tong, int& hieu)
{
    tong = a + b;
    hieu = a - b;
    d = 5;
    ::a = 3;
}
void tinh2(int& a, int& b)
{
    int tong = a + b;
    int hieu = a - b;

    a = tong;
    b = hieu;
}


int main()
{
    d = 2;
    int x = 10, y = 20;

    tinh2(x, y);




    cout << "Tong = " << x << endl;
    cout << "Hieu = " << y << endl;

    return 0;
}
