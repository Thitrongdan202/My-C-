#include <iostream>

using namespace std;

int main()
{
    int a=24, b=16, c=7, d=25;
    int m=a;

    if(b > m)
        m = b;
    if(c > m)
        m = c;
    if(d > m)
        m = d;
    cout << "GTLN = " << m << endl;

    return 0;
}
