#include <iostream>
using namespace std;
int main()
 { 
   int traudung = 0; 
   int traunam = 0; 
   int batraugia = 0;
   cin.ignore();
    for (int i = 1; i <= 100; i++) {
	 if (i % 5 == 0) {
	  traudung++; }
	   if (i % 2 == 0) { 
	   traunam++; } 
	   if (i % 3 == 0) { 
	   batraugia++; } 
	   } cout << "So trau dung an nam: " << traudung<< endl; 
	   cout << "So trau nam an ba: " << traunam << endl; 
	   cout << "So ba trau gia an mot: " << batraugia << endl; 
	   return 0;
}
