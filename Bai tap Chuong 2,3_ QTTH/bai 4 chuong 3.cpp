#include <iostream>
using namespace std;
int main() 
{
int n;
cout << "Nhap so n: ";
cin >> n;

int ok = 1;
for (int i = 2; i <= n-1; i++) {
if (n % i == 0) {
ok = 0;
break; //cau ket thuc mot vong lap
}
}

if (ok == 1) {
cout << n << " la so nguyen to" <<endl;
} else {
cout << n << " khong phai la so nguyen to" <<endl;
}

return 0;
}
