#include <iostream>

using namespace std;

class Employe{
	private:
		string name;
		string name2;
		
	public:
		void setName(string);
		string getName();
		
		void setName2(string);
		string getName2();
		
		Employe();
		~Employe();
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void Employe::setName(string name){
	this->name=name;
}
string Employe::getName(){
	return name;
}


void Employe::setName2(string meme1){
	this->name2=meme1;
}
string Employe::getName2(){
	return name2;
}

Employe::Employe(){
	cout << "calsti" << endl;
}
Employe::~Employe(){
	cout << "yikildi" << endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
	
	Employe emp;
	Employe amp;
	
	emp.setName("halil");
	amp.setName("beynun");
	emp.setName2("halil&beynun");
	cout<< emp.getName2()<< endl;
	cout << emp.getName() << endl;
	cout << amp.getName() <<endl;
	
	
	
	return 0;
}
