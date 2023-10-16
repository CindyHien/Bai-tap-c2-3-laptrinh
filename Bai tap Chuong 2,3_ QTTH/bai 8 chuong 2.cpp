#include <iostream>
using namespace std;

bool namnhuan(int year) {
    if (year % 400 == 0) {   // Neu so nam chia het cho 400, thi la nam nhuan
        return true;
    } else if (year % 100 == 0) {   // Neu so nam chia het cho 4 và không chia het cho 100, khong phai nam nhuan
        return false;
    } else if (year % 4 == 0) {  // N?m nhuan la nam chan
        return true;
    } else {
        return false;
    }
}

int main() {
    int month, year;
    cout << "Nhap vao thang: ";
    cin >> month;
    cout << "Nhap vao nam: ";
    cin >> year;

    if (month < 1 || month > 12) {
        cout << "Thang nhap vao khong hop le." << endl;
        return 0;
    }

    int days;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else if (month == 2) {
        if (namnhuan(year)) {
            days = 29;
        } else {
            days = 28;
        }
    }

    cout << "Thang " << month << " nam " << year << " co " << days << " ngay." << endl;

    return 0;
}
