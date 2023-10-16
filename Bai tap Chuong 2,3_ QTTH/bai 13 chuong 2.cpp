#include <iostream>
#include <cmath>
using namespace std;
int main()
 {
   int a, b, c;
	float p, dt;
	cout<<"Nhap do dai canh a: ";
    cin>>a;
    cout<<"Nhap do dai canh b: ";
    cin>>b;
    cout<<"Nhap do dai canh c: ";
    cin>>c;
    cin.ignore();
	if((a+b>c) and (a+c>b) and (c+b>a))
	{
		p=(a+b+c)/2;
	    dt=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"La ba canh tam giac"<<endl;		
	cout<<"Dien tich:"<<dt<<endl;
	}else{
	cout<<"Ba canh khong phai la ba canh tam giac";
	}

}

