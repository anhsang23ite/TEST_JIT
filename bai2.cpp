#include <iostream>
using namespace std;

int main() {
    int n;

    // Nhap so luong phan tu
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    while (n <= 0) {
        cout << "So phan tu khong hop le, vui long nhap lai: ";
        cin >> n;
    }

    int a[100]; 
    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; i++) {
        cout << "Phan tu thu " << i + 1 << ": ";
        cin >> a[i];
    }

    int max = -1; //gan gia tri cho max ban dau

    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            if (a[i] > max) {
                max = a[i];
            }
        }
    }

    if (max == -1) {
        cout << "\nKhong co phan tu nao chia het cho 3.\n";
    } else {
        cout << "\nGia tri chia het cho 3 lon nhat la: " << max << endl;
    }

    return 0;
}
