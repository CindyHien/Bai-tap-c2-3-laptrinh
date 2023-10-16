#include <iostream>
using namespace std;
int main() 
{
	int csm,csc,tien,tieuthu;
	cout<<"Nhap chi so moi = ";
	cin>>csm;
	cout<<"Nhap chi so cu = ";
	cin>>csc;
	cin.ignore();
	tieuthu=csm-csc;

	if(tieuthu<=100)
		tien=tieuthu*550;
	else if(tieuthu<=150)
		tien=100*550+(tieuthu-100)*1100;
	else if(tieuthu<=200)
		tien=100*550+50*1100+(tieuthu-150)*1470;
	else if(tieuthu<=300)
		tien=100*550+50*1100+50*1470+(tieuthu-200)*1470;
	else
		tien=100*550+50*1100+50*1470+100*1600+(tieuthu-300)*1470;
	cout<<"Chi so moi = "<<csm<<endl;
	cout<<"Chi so cu = "<<csc<<endl;
	cout<<"So tien phai tra = "<<tien<<endl;
	
}	

