#include <iostream>

using namespace std;
int nhap()
{
    int n;
    cout << "Nhap gia tri: " << endl; // printf
    cin >> n; //scanf



    return n;
}
void nhap(int* n)
{
    cout << "Nhap gia tri: " << endl; // printf

}

void hoanVi(int* x, int* y)
{
    int tam = *x;
    *x = *y;
    *y = tam;
}

int main()
{
    int a = 9, b = 7;

    cout << "a = " << a << "\nb = " << b << endl;

    hoanVi(&a, &b);

    cout << "a = " << a << "\nb = " << b << endl;

    return 0;
}
