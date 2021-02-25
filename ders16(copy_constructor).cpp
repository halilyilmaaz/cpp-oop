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
		const int t; // zaten sabit oldugundan dolayý public olabilir..// const deðiþken constructor dan önce deðerleri atanmýs olmalýdýr.Aksi halde üzerinde iþlem yapýlamaz
		int* z;
		Nokta(const Nokta&);
	// constructor	
	Nokta();
	Nokta(int,int,int);	
	// destructor 
	// NOT: destructor parametresiz ve bir tane olmak zorunda..
	~Nokta();
	
	
	int getX()const;
	int getY()const;
	
	void setX(int);
	void setY(int);
	
	
	void degerAta(int,int);
	void ekranaYaz();
	bool baslangicMi();

	
	
	
};
// constructor
Nokta::Nokta() : t(0) { 
	
	x=1;
	y=2;
	//t=0; hattalý kullaným. sabit deðiþkene deðer atanamaz.
	z = new int(5);
	cout<<"parametresiz kurucu"<<x <<" "<<y<<endl;
}
Nokta::Nokta(int x,int y=8,int t=0) : t(t) {
	
	this->x=x;
	this->y=y;
	//this->t=t; hatalý.
	z = new int(6);
	cout<<"parametreli kurucu"<<x <<" "<<y<<endl;
}
// destructor
Nokta::~Nokta(){
	cout<<"yikici calisti"<<x <<" "<<y<<endl;
	delete z;
}

Nokta::Nokta(const Nokta& n) : t(n.t){// sabit value lari bu þekilde atama yapýlýr.
	x = n.x;
	y = n.y;
	z = new int(*n.z);
	cout<< "copy constructor"<<x<<y<<endl;
}


// get metodlarýnýn prototiplerini de böyle tanýmlamamýz gerekiyor.(Bu bize debug time da yani hata ayýklama zamanýnda kolaylýk saglar)
int Nokta::getX()const{
	return x;
}
int Nokta::getY()const{
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
	 
	Nokta n1(1,10,10);
	Nokta n2(n1); //burada
	Nokta n3 = n1; // ve burada copy constructor calisacaktýr.
	// NOT: kurucular ilk giren son cýkar mantýgýyla calýsýr.
	
	
	
	
	return 0;
}
