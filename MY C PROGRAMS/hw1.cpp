#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int roll;
	float marks;
	char sec;
	
	cout <<"ENTER THE NAME OF THE STUDENT:"<<endl;
	cin >> name;
	
	cout <<"ENTER THE ROLL NO. OF THE STUDENT:"<<endl;
	cin >> roll;
	
	cout <<"ENTER THE MARKS OF THE STUDENT:"<<endl;
	cin >> marks;
	
	cout <<"ENTER THE SECTION OF THE STUDENT:"<<endl;
	cin >> sec;
	
	
	cout <<"NAME: "<<name <<endl;
	cout <<"ROLL NO.: "<<roll<<endl;
	cout <<"MARKS: " << marks<<endl;
	cout <<"SECTION: "<< sec<<endl;
	
	return 0;
}
