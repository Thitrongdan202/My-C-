#include <iostream>

using namespace std;
#define SIZE 100
const int Size = 100;

int main()
{
    int a[] ={22, 28, 78, 45, 39};

    cout << a[0] << endl;
    cout << a[3] << endl;

    a[0] = a[3] + 3;


    cout << "gia tri moi: " << a[0] << endl;
    a[5] = a[0] - a[1];

    cout << "a[5] = " << a[5] << endl;
    return 0;
}
