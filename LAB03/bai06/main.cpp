#include <iostream>
using namespace std;

void Fibonacci(int n) {
    int f1 = 0, f2 = 1;
    int fib;

    cout << f1 << " " << f2 << " ";

    for (int i = 2; i < n; i++) {
        fib = f1 + f2;
        cout << fib << " ";
        f1 = f2;
        f2 = fib;
    }
}

int main() {
    int n;
    cout << "Nhap so phan tu can in ra: ";
    cin >> n;

    Fibonacci(n);

    return 0;
}
