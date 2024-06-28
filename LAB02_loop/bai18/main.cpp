#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int n=4 ;
   int tong = 0;
   for (int i = 1; i <= n; ++i) {
      tong = tong + pow(i, 2); // tong +=i
   }

   cout << "Tong = " << t << endl;
    return 0;
}
