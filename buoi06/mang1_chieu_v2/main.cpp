#include <iostream>
#include <time.h>
using namespace std;
#define SIZE 100

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}

void nhap(int a[], int &n)
{
    cout << "Nhap n = ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        do{
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i]; // [-379; 3718].
        }while(a[i]< -379 || a[i] > 3718);
    }
}
void khoiTaoTD(int a[], int &n)
{
    //so luong thuoc [5; 8] = 5 + [0; 3]
    n = 5 + rand()%4;

    for(int i = 0; i < n; i++)
    {  // [10; 20] = 10 + [0; 12]
        a[i] = 10 + rand()%13;
    }
}


/*5.3 tim kiem mot phan tu trong mang
input:
   + mang a
   + so luong n
   + gia tri can tim calue => dat ()
output:
   + bool => return

*/
bool timKiem(int a[], int n, int value)
{
     for (int i = 0; i < n ; i++)
    {
        if(value == a[i])
            return true;
    }
    return false;
}

/* 5.4 tim gia tri lon nhat
input:
   + mang a
   + int n (so luong)
output:
   + max => return

*/
int timMax (int a[], int n)
{
    int Max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > Max)
             Max = a[i];
    }
    return Max;
}
/* 5.5 tinh tong all mang
input:
   + mang a
   + int n
output:
   + gia tri tong  => return

*/
int tongGT (int a[], int n)
{
    int tong = 0;

    for (int i = 0; i < n ; i++)
    {
        //tong = tong + a[i];
        tong += a[i];

    }

    return tong;
}

/* 5.5 tinh tong cac gia tri chan, tich cac gia tri le
input:
   + mang a
   + int n
output:
   + gia tri tong => &
   + gia tri tich => &
*/

/* 5.5 kiem tra mang co toan GT chan
input:
   + mang a
   + int n
output:
   + bool => return
*/
bool toanChan(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2 == 1)
            return false;
    }
    return true;
}


int main()
{
    srand(time(0));
    int a[SIZE];
    int n = 0;

    // nhap(a, n);
    khoiTaoTD(a, n);
    cout << "Da tao " << n << " gia tri." << endl;

    cout << "xuat mang:\n" << endl;
    xuat(a, n);

    cout << "Ket qua cau 5.3: \n";
    int x = 15;
    bool b = timKiem(a, n, x);
    cout << "\t + Tin hieu: " << b << endl;
    if(b) // b ==true
        cout << "\t Tim thay\n";
    else
        cout << "\t Tim khong thay\n";

    int m = timMax(a, n);
    cout << "\n\nKet qua gia tri ;lon nhat" << m << endl;

    m = tongGT(a, n);
    cout << "\n\nK tong:" << m << endl;


    return 0;
}
