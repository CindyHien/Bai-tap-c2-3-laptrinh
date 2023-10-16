#include <iostream>
using namespace std;

int main() {

   char op;    
   float x, y, kq;
   cout << "Nhap 1 trong 4 toan tu (+, -, *, /): ";
   cin >> op;
   cout << "Nhap x: ";
   cin >> x;
   cout << "Nhap y: ";
   cin >> y;
   switch(op) {
       case '+':
           kq = x + y;
           break;
       case '-':
           kq = x - y;
           break;
       case '*':
           kq = x *y;
           break;
       case '/':
           if (y == 0) {
               cout << "Khong chia duoc";
               return 1;
           }
           kq =x / y;
           break;
       default:
           cout << "Khong phai phep toan";
           return 1;
   }
   cout << "Ket qua: " << kq;
   return 0;
}


