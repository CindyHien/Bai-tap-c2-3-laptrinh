#include <iostream>
using namespace std;

int main() {
    int giay;
    cout << "Nhap vao so giay (tu 0 den 86399): ";
    cin >> giay;
    cin.ignore();
	
	if (giay < 0 || giay > 86399) {
        cout << "So giay nhap vao khong hop le." << endl;
        return 0;
    }

    int gio = giay / 3600;
    int phut = ( giay % 3600) / 60;
    int gi = giay % 60;

    cout << "Thoi gian tuong ung la: ";
    if (gio < 10) {
        cout << "0";
    }
    cout << gio << ":";
    if (phut < 10) {
        cout << "0";
    }
    cout << phut << ":";
    if (gi < 10) {
        cout << "0";
    }
    cout << gi << endl;

    return 0;
}
