#include <iostream>

using namespace std;

int main()
{
   int max_sum = 0;
    int max_x, max_y, max_z;


    for (int x = 1; x <= 489; x++) {
        for (int y = 1; y <= (979 - 2*x)/7; y++) {
            for (int z = 1; z <= (979 - 2*x - 7*y)/9; z++) {
                if (x + y + z > max_sum && 2*x + 7*y + 9*z == 979) {
                    max_sum = x + y + z;
                    max_x = x;
                    max_y = y;
                    max_z = z;
                }
            }
        }
    }

    cout << "Nghiem lon nhat la:\n";
    cout << "x = " << max_x << endl;
    cout << "y = " << max_y << endl;
    cout << "z = " << max_z << endl;
    return 0;
}
