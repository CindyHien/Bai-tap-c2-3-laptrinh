#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;

	cout<<"nhap he so a: ";
	cin>>a;
	cout<<"nhap he so b: ";
	cin>>b;
	cout<<"nhap he so c: ";
	cin>>c;

	cin.ignore();
	
	if (a*a == b*b + c*c || b*b == c*c + a*a || c*c == a*a + b*b)
	{
        cout << "Tam giac nay la tam giac vuong.";
    } else {
        cout << "Tam giac nay khong la tam giac vuong.";
    }
	
		
	return 0;
}
