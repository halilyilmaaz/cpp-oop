#include <iostream>
using namespace std;
// destructor
class Nokta{
	private:
		int x;
		int y;
		
	protected:
		// kal�t�m yoluyla turetilen s�n�flar�n uniq �zelliklerini bu alanda tan�mlars�n	
	public:
		const int t; // zaten sabit oldugundan dolay� public olabilir..// const de�i�ken constructor dan �nce de�erleri atanm�s olmal�d�r.Aksi halde �zerinde i�lem yap�lamaz
		int* z;
		
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
	//t=0; hattal� kullan�m. sabit de�i�kene de�er atanamaz.
	z = new int(5);
	cout<<"parametresiz kurucu"<<x <<" "<<y<<endl;
}
Nokta::Nokta(int x,int y=8,int t=0) : t(t) {
	
	this->x=x;
	this->y=y;
	//this->t=t; hatal�.
	z = new int(6);
	cout<<"parametreli kurucu"<<x <<" "<<y<<endl;
}
// destructor
Nokta::~Nokta(){
	cout<<"yikici calisti"<<x <<" "<<y<<endl;
	delete z;
}




// get metodlar�n�n prototiplerini de b�yle tan�mlamam�z gerekiyor.(Bu bize debug time da yani hata ay�klama zaman�nda kolayl�k saglar)
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
	this->y=y;	// set fonk. �zerinde de�i�kene istedi�imiz islemi yapar�z
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
	const Nokta n2(2,25,100); // n2 nesnesinin �zellikleri de�i�tirilemez.�zellik ve metotlari set edilemez.(de�i�tirilemez)
	
	cout <<n1.t<<"t nesnesi "<<endl;
	cout <<n2.t<<"t nesnensi"<<endl;
	
	
	return 0;
}
