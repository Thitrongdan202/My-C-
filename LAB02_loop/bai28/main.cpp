#include <iostream>

using namespace std;

int main()
{
     int x, y, z;
    int s;
    for (x = 1; x <= 979 / 2; x++) {
        for (y = 1; y <= 979 / 7; y++) {
            for (z = 1; z <= 979 / 9; z++) {
                s = 2 * x + 7 * y + 9 * z;
                if (s == 979) {
                    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
                }
            }
        }
    }
    return 0;
}
