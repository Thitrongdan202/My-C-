#include <iostream>

using namespace std;

int main()
{
    int n;
    double x, s, denominator;

    cout << "Nhap gia tri cua n: ";
    cin >> n;

    cout << "Nhap gia tri cua x: ";
    cin >> x;

    s = 0;
    for (int i = 1; i <= n; i++)
    {
        denominator = 0;
        for (int j = 1; j <= i; j++)
        {
            denominator += j;
        }
        s += pow(x, i) / denominator;
    }

    cout << "Tong = " << s << endl;
    return 0;
}
