#include <iostream>

using namespace std;

int main()
{
   int n=8 ;
   int tong= 0;

   for (int i = 2; i <= n; i = i + 2) {
      tong = tong + i; // tong +=i
   }

   cout << "Tong = " << tong << endl;
    return 0;
}
