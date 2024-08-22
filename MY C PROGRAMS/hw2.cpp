#include <iostream>
using namespace std;
namespace n1{
	int a=10;
	void func(){
	  cout <<"I am func() from n1 with a="<<a<<endl;
	}
}

namespace n2{
	int a=20;
	void func(){
	  cout <<"I am func() from n2 with a="<<a<<endl;
	}
}

int main()
{
	n1::func();
	cout<<n1::a<<endl;
	n2::func();
	cout<<n2::a<<endl;
	
	return 0;
}
