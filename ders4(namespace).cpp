#include <iostream>
using namespace std;
namespace programci1{
	int x=2;
	void Foo(){
		
		int x=5;
		cout<<x<<endl;
}

}
int main(){
	cout<<programci1::x<<endl;
	programci1::Foo();
	return 0;
}
