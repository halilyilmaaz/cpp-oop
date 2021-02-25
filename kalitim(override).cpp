#include <iostream>
using namespace std;
// override =! overloading
class Base{
	public:
		int x;
		int data[100];
		int size;
		Base():size(0){	}
		void add(int value){
			data[size] = value;
			size++;
		}
		
		void print()const{
		for(int i=0;i<size;i++){
			cout << data[i]<<" "<<endl;
		}
		}
};
class Derivate:public Base{
	private:
		float data[100];
		int size;
	public:
	
		Derivate():size(0){	}
		void add(float value){
			data[size] = value;
			size++;
		}
		void x(){
			// burada super class taki int x i x-methoduyla ezeceðiz.
			cout << "hello world"<<endl;
		}
		void print()const{
		Base::print(); // super class taki print- methodu cagýrýr.	
		for(int i=0;i<size;i++){
			cout << data[i]<<" "<<endl;
		}
		}
		
		void addInt(int value){
			Base::add(value);
		}
};
int main(){
	
	Base b;
	b.add(10);
	b.add(25);
	b.print();
	Derivate d;
	d.addInt(5);
	d.addInt(7);
	d.add(1.5);
	d.add(3.5);
	d.print();
	d.x();
	
	// super class taki int x i çaðýrmak için ise casting iþlemleri yapmalýyýz
	/*
	Base* ptr = &d;
	ptr->x=2;
	cout<<ptr->x<<endl;
	*/
	
	cout<<d.size<<endl;
	
	
	
	return 0;
}
