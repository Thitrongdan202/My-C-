#include <iostream>

using namespace std;

/*
do {
        lenh
        khoi lenh
    } while (stop);

*/

int main()
{
    int n;
    do {
        cout << "Nhap n =";
        cin >> n;
    }while (n < 0);
    cout << "Ket qua n =" << n << endl;

    return 0;
}
