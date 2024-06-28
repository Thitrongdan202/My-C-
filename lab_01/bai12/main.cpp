#include <iostream>
#include<time.h>
using namespace std;

int main()
{
    srand(time(0));
    cout << "random = " << rand() << endl;
    return 0;
}
