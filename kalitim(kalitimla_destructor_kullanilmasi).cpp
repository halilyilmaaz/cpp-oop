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
		/*
		~Base(){
			cout<< "Base yikici"<< endl;
			delete ptr;
		}*/
};

class Derivate:public Base{
	public:
		int* ptr2;
		Derivate(int i=3,int j = 2): Base(i){
			cout << "derivate kurucu"<<endl;
			ptr2 = new int(j);
		}
		Derivate(const Derivate& d) : Base(d){
			cout << "derivate kopyalama kurucusu"<<endl;
			ptr2= new int(*d.ptr2);
		}
		
		~Derivate(){
			cout<< "Derivate yikici"<< endl;
			delete ptr2;
		}
		
};
int main(){
	/*
	Base b(100);
	cout<< b.ptr<<"\t"<<*b.ptr<<endl;
	Base xb = b;
	cout << xb.ptr<<"\t"<<*xb.ptr<<endl;
	*/
	
	int *p1,*p2;
	{
		Derivate d(100,200);
		p1 = d.ptr;
		p2 = d.ptr2;
		cout << *d.ptr <<" "<< *d.ptr2<<endl;	
	}
	
	cout << *p1 <<" "<<*p2<< endl;
	
	
	
	
	
	
	
	return 0;
}
