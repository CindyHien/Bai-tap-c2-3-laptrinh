#include <iostream>
using namespace std;
int main()
{
	int a,b;

	cout<<"nhap he so a: ";
	cin>>a;
	cout<<"nhap he so b: ";
	cin>>b;
	cin.ignore();
	
	if(a>b ){
		cout<<" a lon hon b, a="<<a;
	}else if (a<b ){
		cout<<"b lon hon a, b= "<<b; 
		//em tu them neu 2 so giong nhau
	}else (a==b); 
	    cout<<"hai so a,b bang nhau";	
	
	return 0;
}
