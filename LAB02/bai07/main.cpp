#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Nhap mot ky tu: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {

        ch = ch - 'a' + 'A';
    } else if (ch >= 'A' && ch <= 'Z') {

        ch = ch - 'A' + 'a';
    } else {

        cout << "Ky tu ban vua nhap phai la chu cai.";
        return 0;
    }

    cout << "Ky tu sau khi duoc doi la: " << ch;
    return 0;
}
