// DERS DEVAM EDECEK
#include <iostream>
using namespace std;

class Nokta{
	private:
		int x;
		int y;
		
	protected:
			
	public:
		const int t; 
		int* z;
		
	
	Nokta();
	Nokta(int,int,int);	
	
	
	~Nokta();
	
	
	int getX()const;
	int getY()const;
	
	void setX(int);
	void setY(int);
	
	
	void degerAta(int,int);
	void ekranaYaz();
	bool baslangicMi();

	
	
	
};

Nokta::Nokta() : t(0) { 
	x=1;
	y=2;
	
	z = new int(5);
	cout<<"parametresiz kurucu"<<x <<" "<<y<<endl;
}
Nokta::Nokta(int x,int y=8,int t=0) : t(t) {
	
	this->x=x;
	this->y=y;
	.
	z = new int(6);
	cout<<"parametreli kurucu"<<x <<" "<<y<<endl;
}

Nokta::~Nokta(){
	cout<<"yikici calisti"<<x <<" "<<y<<endl;
	delete z;
}




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
	this->y=y;	
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
	const Nokta n2(2,25,100); 
	
	cout <<n1.t<<"t nesnesi "<<endl;
	cout <<n2.t<<"t nesnensi"<<endl;
	
	
	return 0;
}
