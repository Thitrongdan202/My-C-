#include <iostream>

using namespace std;

int kiemtraGT()
{
    int n;
    do {
        cout << "Nhap gia tri: ";
        cin>> n;
    }while (n < 0);
    return n;
}

int main ()
{
    int a, b, c, d;

    a =kiemtraGT();
    b =kiemtraGT();
    c =kiemtraGT();
    d =kiemtraGT();
}


    cout << "Gia tri: " << n << endl;


    return 0;
}
