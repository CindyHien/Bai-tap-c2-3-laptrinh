#include <iostream>
using namespace std;
int main()
{
	int tong,toan,ly,hoa;

	cout<<"Nhap diem mon Toan: ";
	cin>>toan;
	cout<<"Nhap diem mon Ly: ";
	cin>>ly;
	cout<<"Nhap diem mon Hoa: ";
	cin>>hoa;
	cin.ignore();
  tong = toan + ly + hoa;
	if ((tong>=15) and (toan>=4) and (ly>=4) and (hoa>=4))
	{
		cout<<"Thi dau";
		if(toan>=5 and ly>=5 and hoa>=5)
			cout<<"Hoc deu cac mon";
		else	
			cout<<"Hoc chua deu cac mon";
	}else
		cout<<"Thi chua dat";		
}

	
