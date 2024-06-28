#include <iostream>

using namespace std;

// Tính S = 1 + 2 + 3 + ... + n (n nguyên và lớn hơn 0)

int main()
{
   int n=4 ;
   int tong= 0;



   for (int i = 1; i <= n; ++i) {
      tong = + i; // tong +=i
   }

   cout << "Tong = " << tong << endl;
    return 0;
}
