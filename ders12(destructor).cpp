#include <iostream>
using namespace std;
// destructor
class Nokta{
	private:
		int x;
		int y;
		
	protected:
		// kalýtým yoluyla turetilen sýnýflarýn uniq özelliklerini bu alanda tanýmlarsýn	
	public:
		int* z;
		
	// constructor	
	Nokta();
	Nokta(int,int);	
	// destructor 
	// NOT: destructor parametresiz ve bir tane olmak zorunda..
	~Nokta();
	
	
	int getX();
	int getY();
	
	void setX(int);
	void setY(int);
	
	
	void degerAta(int,int);
	void ekranaYaz();
	bool baslangicMi();

	
	
	
};
// constructor
Nokta::Nokta(){
	cout<<"parametresiz kurucu"<<x <<" "<<y<<endl;
	x=1;
	y=2;
	z = new int(5);
}
Nokta::Nokta(int x,int y){
	cout<<"parametreli kurucu"<<x <<" "<<y<<endl;
	this->x=x;
	this->y=y;
	z = new int(6);
}
// destructor
Nokta::~Nokta(){
	cout<<"yikici calisti"<<x <<" "<<y<<endl;
	delete z;
}




int Nokta::getX(){
	return x;
}
int Nokta::getY(){
	return y;
}


void Nokta::setX(int x){
	this->x=x;
}
void Nokta::setY(int y){
	this->y=y;	// set fonk. üzerinde deðiþkene istediðimiz islemi yaparýz
}
void Nokta::degerAta(int x,int y){
	this->x=x;
	this->y=y;
}

void Nokta::ekranaYaz(){
		cout<<x<<","<<y<<endl;
}

bool Nokta::baslangicMi(){
		return x==0 && y==0;
}



int main(){
	
	Nokta n1(1,10);
	Nokta n2(2,25);
	
	
	
	
	return 0;
}
