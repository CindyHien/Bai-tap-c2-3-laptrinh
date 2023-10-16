#include <iostream>
using namespace std;
 
int main()
 {
 
    int gio;
    float luonggio, thuong = 1.5, luong;
 
    cout<<"Nhap so gio lam: ";
    cin>>gio;
    cout<<"Nhap luong moi gio: ";
    cin>>luonggio;
    
 
    if(gio<40)
 
        luong = gio* luonggio;
   else
 
        luong = 40 * luonggio+ (gio-40) * luonggio * thuong;
 
    cout<<"Tien luong:"<<luong;
 
}
