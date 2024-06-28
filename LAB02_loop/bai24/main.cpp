#include <iostream>

using namespace std;

int main()
{
    int n;
    double S = 0.0;

    cout << "Nhap n: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        S += 1.0/(i*(i+1));
    }

    cout << "Tong = " << S << endl;
    return 0;
}
