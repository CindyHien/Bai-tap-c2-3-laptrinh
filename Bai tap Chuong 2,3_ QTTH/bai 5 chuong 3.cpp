#include <iostream>
using namespace std;
int main()
{
	int cho,ga;
	for(cho=1;cho<25;cho++)
    	for(ga=1;ga<36;ga++)
        	if((ga+cho==36) and (ga*2+cho*4==100))
			cout<<"Co "<<ga<<" con ga"<<endl;
			cout<<"Co "<<cho<<" con cho"<<endl;
}			

