// BU DERS DEVAM EDECEK............................

#include <iostream>
using namespace std;
// destructor
class Nokta{
	private:
		int x;
		int y;
		static int i;
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
	
	static int geti();
	static void seti(int);
	
	
	
	void degerAta(int,int);
	void ekranaYaz();
	bool baslangicMi();

	
	
	
};

class Cizgi{
	Nokta baslangic;
	Nokta biis;
	public:
		Cizgi(Nokta baslangic,Nokta bitis) : baslangic(baslangic),bitis(bitis){
			
		}
		
		double uzunluk()const{
			return baslangic.
		}
};

// constructor
Nokta::Nokta() : t(0) { 
	
	x=2;
	y=3;
	//t=0; hattalý kullaným. sabit deðiþkene deðer atanamaz.
	z = new int(5);
	i++;
	//cout<<"parametresiz kurucu"<<x <<" "<<y<<endl;
}
Nokta::Nokta(int x,int y=8,int t=0) : t(t) {
	
	this->x=x;
	this->y=y;
	//this->t=t; hatalý.
	z = new int(6);
	//cout<<"parametreli kurucu"<<x <<" "<<y<<endl;
}
// destructor
Nokta::~Nokta(){
	//cout<<"yikici calisti"<<x <<" "<<y<<endl;
	i--;
	
	delete z;
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

int Nokta::geti(){
	return i;
}
void Nokta::seti(int _i){
	i=_i;
}
int Nokta::i= 100;
//NOT: static özelliklerde this-> anahtar kelimesi kullanýlamýyor.

int main(){
	 
	Nokta n1;
	Nokta n2(n1);
	{
		cout <<n1.geti()<< endl;
		Nokta n3;
		cout <<n1.geti()<< endl;
		cout << n3.geti()<< endl;
		cout << n3.getX()<<endl;
		cout << n1.getX()<< endl;
	}
	cout << n1.geti()<< endl;
	
	
	
	
	
	
	return 0;
}
