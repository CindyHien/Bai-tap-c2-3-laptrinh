#include <iostream>
#include <cmath>
using namespace std;
int main()
 {
	int n;
    cout<<"Nhap n= " ;
	cin>>n;

	for(int i=2;i<=n;i++)
	{
		int kt=1;
		for(int j=2;j<=sqrt(i);j++)
			if(i%j==0)
			{
				kt=0;
				break;
			}
		if(kt)	
		cout<<" "<<i;
	}	
}


