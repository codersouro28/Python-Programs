#include <iostream>
using namespace std;

int main()
{
	int arri[]={10,20,30,40,50};
	float arrf[]={10.4,20.5,30.8};
	
	
	for(int i:arri)
		cout<<i<<" ";
	cout<<endl;
	
	for(float f:arrf)
		cout<<f<<" ";
	cout<<endl;
	
	return 0;
}

