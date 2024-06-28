#include <iostream>

using namespace std;

int main()
{
    int n;
    double s = 0;

    cout << "Nhap vao so nguyen n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        s += (double)i / (i + 1);
    }

    cout << "Tong (" << n << ") = " << s << endl;
    return 0;
}
