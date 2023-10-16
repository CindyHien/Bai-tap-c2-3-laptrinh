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
	cout<<"nhap he so d: ";
	cin>>d;
	cin.ignore();
	
	if((a>b) and(a>c)and (a>d)){
		cout<<" a la so lon nhat ="<<a;
		
	}else if((b>a) and(b>c)and (b>d)){
		cout<<"b la so lon nhat = "<<b; 
		
	}else if((c>b) and(c>a)and (c>d)) {
	    cout<<"c la so lon nhat = "<<c; 
			
    }else if((d>b) and(d>c)and (d>a)){
        cout<<"d la so lon nhat = "<<d; 	
        
    }else 
	    cout<<"so lon nhat la "<<a,b,c,d;	
	return 0;
}
