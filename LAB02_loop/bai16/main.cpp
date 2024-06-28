#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    bool isPrime = true;

    cout << "Nhap n: ";
    cin >> n;

    if (n < 2)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        cout << n << " la so nguyen to";
    }
    else
    {
        cout << n << " khong phai la so nguyen to";
    }
    return 0;
}
