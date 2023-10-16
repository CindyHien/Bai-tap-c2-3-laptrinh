#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<< "Nhap so luong n so nguyen: ";
    cin>> n;
    
    int max, min, so; 
    cout<< "Nhap so n1: ";
    cin>>so;
    max= min=so;
    
    for (int i = 2; i <= n; i++) {
        cout<< "Nhap so " << i << ": ";
        cin>> so;
        
        if (so > max) {
            max = so;
        }
        
        if (so < min) {
            min =so;
        }
    }
    
    cout<<"So lon nhat = " <<max<<endl;
    cout<<"So nho nhat = " <<min<<endl;
    
    return 0;
}
