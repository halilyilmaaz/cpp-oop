#include <iostream>
#include <math.h> 
using namespace std;
class Nokta{
	private:
		int x;
		int y;
		int i;
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
	
	int getI();
	int getX();
	int getY();
	
	void setI(int i);
	void setX(int);
	void setY(int);
	
	double uzaklikHesapla(const Nokta& n);
	
	void degerAta(int,int);
	void ekranaYaz();
	bool baslangicMi();
	
};
int Nokta::getI(){
	return i;
}
void Nokta::setI(int _i){
	i=_i;
}
int Nokta::uzaklikHesapla(int xU,int yU){
	int xU = pow(n.getX() - x,2);
	int yU = pow(n.getY1) - y,2);
	return sqrt(xU+yU);
}

Nokta::Nokta(){
	//cout<<"parametresiz kurucu"<<x <<" "<<y<<endl;
	x=1;
	y=2;
	z = new int(5);
	i++;
}
Nokta::Nokta(int x,int y){
	//cout<<"parametreli kurucu"<<x <<" "<<y<<endl;
	this->x=x;
	this->y=y;
	z = new int(6);
	i++;
}
// destructor

Nokta::~Nokta(){
	//cout << "yikici calisti"<< x <<y <<endl;
	i--;
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
int Nokta::i=10; // statik deðiþkene deðer atama


int main(){
	Nokta n1(3,4);
	Nokta n2(5,6);
	cout<< n1.uzaklikHesapla(n2);
	
	
	
	return 0;
}
