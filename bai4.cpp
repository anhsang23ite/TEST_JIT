#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu n: ";
    cin >> n;

    int a[100], b[100], dem = 0;

    // Nhap mang
    cout << "Nhap " << n << " phan tu:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Duyet mang a va luu gia tri phan biet vao b
    for (int i = 0; i < n; i++) {
        bool daTonTai = false;
        for (int j = 0; j < dem; j++) {
            if (a[i] == b[j]) {
                daTonTai = true;
                break;
            }
        }
        if (!daTonTai) {
            b[dem] = a[i];
            dem++;
        }
    }

    // In ket qua
    cout << "So luong gia tri phan biet: " << dem << endl;
    cout << "Cac gia tri phan biet la: ";
    for (int i = 0; i < dem; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
