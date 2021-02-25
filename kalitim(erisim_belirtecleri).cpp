#include <iostream>
using namespace std;
class A{
	private:
		int priA;
	protected:
		int proA;
	public:
		int pubA;
		A():pubA(0),proA(1),priA(2){
			
		}		
};

class B:protected A{
	private:
		int priB;	
	protected:
		int proB;
	public:
		int pubB;
		B():pubB(3),proB(4),priB(5){
			
		}
		void yazdir(){
			cout << A::pubA<<" "<<A::proA << endl;
		}
};
class C:public B{
	public:
		void x(){
			cout << A::pubA<<endl;
		}
};



int main(){
	B b;
	A a;
	//cout <<b.pubA;
	//b.yazdir();
	
	C c;
		
	c.x();
	return 0;
}





