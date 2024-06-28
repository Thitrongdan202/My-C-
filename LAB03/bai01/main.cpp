#include <iostream>

using namespace std;
/* Bài 1
Input:
    + môt số => đặt ()
Output:
    +bool

*/
bool kiemtra(int a)
{
    if(a < 0 && abs(a)%2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x = 20;

    bool b = kiemtra(x);

    cout << "Ket qua: " << b << endl;
    cout << "Ket qua: " << kiemtra(-6) << endl;

    return 0;
}
