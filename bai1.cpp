#include <iostream>
using namespace std;

bool soNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void inSoNguyenToNhoHonN(int n) {
    if(n<=2) {
        cout << "Khong co so nguyen to";
        }
    else {
    cout << "Cac so nguyen to nho hon " << n << " la: ";
    for (int i = 2; i < n; i++) {
        if (soNguyenTo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    inSoNguyenToNhoHonN(n);
    return 0;
}
