#include <iostream>

using namespace std;

/*
while(stop)
{
    lenh
    khoi lenh
}

for (start; stop; step) =>while

start;
while(stop)
{
    lenh
    khoi lenh
}

*/



int main()
{
    int n;
    cout << "nhap n =";
    cin >> n;
    while (n<0)
    {
         cout << "nhap lai n >0";
         cin >> n;

    }

    cout << "so vua nhajp la n" << n << endl;

    return 0;
}
