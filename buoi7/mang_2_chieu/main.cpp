#include <iostream>
#define D 5
#define C 10
using namespace std;

void nhap(int)
for (int i =0; i < )


void xuat (int a[][C], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j= 0; j < cot; j++)
        {
            cout << a [i][j] << "\t";
        }
            cout << endl;
    }

}
/* cau 3 tìm kiếm giá trị value? có trong mảng
input:
 +mảng 2 chiều a
 +số dòng
 +số cột
 +giá trị cần tìm
output:
+bool
*/
bool timKiem (int a[][C], int dong, int cot, int value)
{
    for (int i = 0;i < dong; i++)
    {
        for(int j = 0; j < cot, j++)
        {
            if (a[i][j] == value)
                return true;
        }
               return false;
    }
int tong (int a[][C], int dong, int cot)
{
    int tong = 0;

    for (int i = 0; i< dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(a[i][j]% 2 == 0)
            tong = tong + a[i][j];
        }
    }
    return tong;
}

int main()
{
    int a[D][C] = {
                     {1,2,3,4,5},
                     {2,4,6,8,6},
                     {3,5,7,8,3},
                     {2,7,4,8,5}
                  };
    // int a [D][C];
    cout << "cau 2\n";

    cout << "cau4 \n" ;
    cout << "\tket qua"
    int dong = 0, cot = 0;

    xuat (a, dong, cot)
    return 0;
}
