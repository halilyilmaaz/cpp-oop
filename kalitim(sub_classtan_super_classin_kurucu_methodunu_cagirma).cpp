#include <iostream>
using namespace std;

class Base{
	public:
		int* ptr;
	
		Base(int i = 1){
			cout<< "Base kurucu"<< endl;
			ptr = new int(i);
		}
		
		Base(const Base& b){
			cout<< "Base kopyalama kurucu"<< endl;
			ptr = new int(*b.ptr);
		}
};

class Derivate:public Base{
	public:
		int* ptr2;
		Derivate(int j = 2){
			cout << "derivate kurucu"<<endl;
			ptr2 = new int(j);
		}
		Derivate(const Derivate& d) : Base(d){
			cout << "derivate kopyalama kurucusu"<<endl;
			ptr2= new int(*d.ptr2);
		}
};
int main(){
	/*
	Base b(100);
	cout<< b.ptr<<"\t"<<*b.ptr<<endl;
	Base xb = b;
	cout << xb.ptr<<"\t"<<*xb.ptr<<endl;
	*/
	
	Derivate d(500);
	cout << d.ptr2<<"\t"<<*d.ptr2<< endl;
	Derivate xd =d;
	cout << xd.ptr2<<"\t"<<*xd.ptr2<<endl;
	
	
	
	
	
	
	
	
	return 0;
}
