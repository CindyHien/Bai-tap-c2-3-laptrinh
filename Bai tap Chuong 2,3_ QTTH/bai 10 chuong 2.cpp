#include <iostream>
using namespace std;
int main()
{
	int n;

	cout<<"Nhap so n tu 0 den 9: ";
	cin>>n ;

	cin.ignore();
	
	
   if( n <0 || n>9){
   	cout<<"N khong dung, moi nhap lai"<<endl;
   	return 0;
   }
    if (n==0)
	  cout<<"Khong";
    else if (n==1)
	  cout << "Mot ";
    else if (n==2)  
      cout<< "Hai";
	else if (n==3)
	  cout << "Ba ";
    else if (n==4)   
      cout<< "Bon";
	else if (n==5)
	  cout << "Nam ";
    else if (n==6)
      cout<< "Sau";
	else if (n==7)
	  cout << "Bay ";
    else if (n==8)  
      cout<< "Tam";    
    else if (n==9)
      cout<< "Chin";     
    
    cout << endl;
}
