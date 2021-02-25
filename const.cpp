#include <iostream>
using namespace std;

class Test{
	private:
		int a;
	public:
		Test(int a);
		int getValue()const;
		void setValue(int);	
		void test();
};

Test::Test(int a){
	this->a=a;
}
int Test::getValue()const{
	
	return a;
}
void Test::setValue(int a1){
	this->a=a1;
}
void Test::test(){
	cout << "test metodu"<<endl;
}




int main(){
	Test test1(10);
	
	test1.test();
	cout << test1.getValue() << endl;	
	
	
	
	return 0;
}
