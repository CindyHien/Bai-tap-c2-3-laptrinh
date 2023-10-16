#include <iostream>
using namespace std;

int main() {
    float a, b, c, d;
    cout << "Nhap vao so thuc a: ";
    cin >> a ;
    cout << "Nhap vao so thuc b: ";
    cin >> b ;
    cout << "Nhap vao so thuc c: ";
    cin >> c ;
    cout << "Nhap vao so thuc d: ";
    cin >> d ;
    cin.ignore();

    float max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }

    cout << "So lon nhat trong 4 so la: " << max << endl;

    return 0;
}
