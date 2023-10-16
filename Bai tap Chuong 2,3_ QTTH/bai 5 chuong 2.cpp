#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Nhap vao mot so nguyen duong: ";
    cin >> a;

    if (a < 1) {
        cout << "So nhap vao khong phai la so nguyen duong." << endl;
    } else if (a % 2 == 0) {
        cout << a << " la so chan." << endl;
    } else {
        cout << a << " la so le." << endl;
    }

    return 0;
}
