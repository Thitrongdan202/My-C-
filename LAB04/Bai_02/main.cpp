#include <iostream>
#include <ctime>
using namespace std;

const int Dong = 3;
const int Cot = 4;

void Random(int arr[Dong][Cot], int minVal, int maxVal) {
    srand(time(NULL));
    for (int i = 0; i < Dong; i++) {
        for (int j = 0; j < Dong; j++) {
            arr[i][j] = rand() % (maxVal - minVal + 1) + minVal;
        }
    }
}

void print(int arr[Dong][Cot]) {
    for (int i = 0; i < Dong; i++) {
        for (int j = 0; j < Cot; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int Max(int arr[Dong][Cot]) {
    int maxVal = arr[0][0];
    for (int i = 0; i < Dong; i++) {
        for (int j = 0; j < Cot; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }
    return maxVal;
}

int main() {
    int arr[Dong][Cot];
    int choice;

    do {
        cout << "1. Gia tri ngau nhien" << endl;
        cout << "2. In mang" << endl;
        cout << "3. Phan tu lon nhat" << endl;
        cout << "0. thoat" << endl;
        cout << "Nhap: ";
        cin >> choice;

        switch (choice) {
            case 1:
                Random(arr, -39, 79);
                cout << "Gia tri ngau nhien." << endl;
                break;
            case 2:
                print(arr);
                break;
            case 3:
                cout << "Phan tu lon nhat la: " << Max(arr) << endl;
                break;
            case 0:
                cout << "ket thuc chuong trinh." << endl;
                break;
            default:
                cout << "Gia tri khong dung, nhap lai." << endl;
                break;
        }

        cout << endl;

    } while (choice != 0);

    return 0;
}
