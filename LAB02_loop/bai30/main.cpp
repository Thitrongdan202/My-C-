#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    int minS = 699;
    for (x = 1; x <= 979 / 2; x++)
    {
        for (y = 1; y <= (979 - 2 * x) / 7; y++)
        {
            for (z = 1; z <= (979 - 2 * x - 7 * y) / 9; z++)
            {
                if (2 * x + 7 * y + 9 * z == 979 && x + y + z < minS)
                {
                    minS = x + y + z;
                    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
                }
            }
        }
    }
    return 0;
}
