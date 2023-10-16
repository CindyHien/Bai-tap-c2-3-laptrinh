#include <iostream>
using namespace std;
int main()
{
	int a,b,c;

	cout<<"Nhap canh a: ";
	cin>>a;
	cout<<"Nhap canh b: ";
	cin>>b;
	cout<<"Nhap canh c: ";
	cin>>c;
	cin.ignore();
	
	if((a==b) and(b==c)) {
		cout<<"La tam giac deu";
		
	}else 
		cout<<"Khong phai la tam giac deu"; 
			
	return 0;
}
