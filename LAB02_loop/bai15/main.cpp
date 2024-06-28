#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    int sqrt_n = sqrt(n);
    if (sqrt_n * sqrt_n == n) {
        cout << n << " la so chinh phuong.";
    }
    else {
        cout << n << " khong la so chinh phuong.";
    }

    return 0;
}
