#include <iostream>

using namespace std;

int main()
{
    int a=20, b=6, c=17, d=5;
    int m=a;

    if(b < m)
        m = b;
    if(c < m)
        m = c;
    if(d < m)
        m = d;
    cout << "GTNN = " << m << endl;

    return 0;
}
