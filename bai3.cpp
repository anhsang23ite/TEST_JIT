#include <iostream>
#include <string>
using namespace std;

struct SinhVien {
    string ten;
    float toan;
    float li;
    float hoa;
};

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    cin.ignore(); 

    SinhVien sv[n]; 

    for (int i = 0; i < n; i++) {
        cout << "\nNhap thong tin sinh vien thu " << i + 1 << ":\n";

        cout << "Nhap ten: ";
        getline(cin, sv[i].ten);

        
        cout << "Nhap diem toan: ";
        cin >> sv[i].toan;
        while (sv[i].toan < 0 || sv[i].toan > 10) {
            cout << "So diem khong hop le, vui long nhap lai: ";
            cin >> sv[i].toan;
        }

        
        cout << "Nhap diem li: ";
        cin >> sv[i].li;
        while (sv[i].li < 0 || sv[i].li > 10) {
            cout << "So diem khong hop le, vui long nhap lai: ";
            cin >> sv[i].li;
        }

    
        cout << "Nhap diem hoa: ";
        cin >> sv[i].hoa;
        while (sv[i].hoa < 0 || sv[i].hoa > 10) {
            cout << "So diem khong hop le, vui long nhap lai: ";
            cin >> sv[i].hoa;
        }

        cin.ignore(); // xoa newline truoc
    }

    cout << "\n--- Thong tin sinh vien ---\n";
    for (int i = 0; i < n; i++) {
        float diemTB = (sv[i].toan + sv[i].li + sv[i].hoa) / 3;
        cout << "Sinh vien: " << sv[i].ten << ", Diem TB: " << diemTB << endl;
            }
    cout << "Sinh vien co diem trung binh tren 8 la: "; 
    for (int i = 0; i < n; i++) {
        float diemTB = (sv[i].toan + sv[i].li + sv[i].hoa) / 3;
        if (diemTB >= 8) {
                cout << " Sinh vien: "<<sv[i].ten;
            } }
    return 0;
}
