#include <iostream>

using namespace std;

void xuat(int* a, int n)
{
    for (int i = 0; i < 5; i++)
    {
        cout << *(a + i) << endl;
    }
}


int main()
{
    int a[100] = {1, 6, 3, 9, 7};

    cout <<  a << endl;

    xuat(a, 5);

    int* x = new int [100];

    return 0;
}
