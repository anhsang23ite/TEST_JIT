#include <iostream>
using namespace std;

const int MAX = 31; // vì n <= 30
int fiboMemo[MAX];  // mang ghi KQ

//ham dequy
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1 || n == 2) return 1;

    if (fiboMemo[n] != -1) return fiboMemo[n]; 

    fiboMemo[n] = fibonacci(n - 1) + fibonacci(n - 2);  //ghi KQ
    return fiboMemo[n];
}

int main() {
    int n;

    
    cout << "Nhap so n (1 <= n <= 30): ";
    cin >> n;
    while (cin.fail() || n <= 0 || n > 30) {
        cin.clear(); 
        cin.ignore(1000, '\n'); //bo qua du lieu sai
        cout << "Nhap khong hop le. Vui long nhap lai (1 <= n <= 30): ";
        cin >> n;
    }

    //khoi tao mang chua tinh
    for (int i = 0; i < MAX; i++) {
        fiboMemo[i] = -1;
    }


    cout << "\nDay Fibonacci tu F(1) den F(" << n << "):\n";
    for (int i = 1; i <= n; i++) {
        cout << "F(" << i << ") = " << fibonacci(i) << endl;
    }

    return 0;
}
