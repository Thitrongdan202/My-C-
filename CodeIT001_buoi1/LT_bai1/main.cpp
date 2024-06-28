#include <iostream>

using namespace std;

int main()
{
    int nam_sinh = 1990, tuoi = 10;

    float can_nang = 72e3;

    // count la bien toan xuat du lieu
    cout << "Nam sinh: " << nam_sinh << endl;
    cout << "Can nang: " << can_nang << endl;

    // false <=>  0 , khác 0 là true
    bool tat_mo = true;
    cout << "tat mo:" << tat_mo << endl;

    //kieu ki tu
    char c  = 'A',  kytu = '@';
    cout << "ky tu" << c << endl;
    cout << "ky tu" << kytu << endl;

    // dat ten
    typedef int meo;

    meo x = 10;

    cout << "x =" << x << endl;
    return 0;
}
