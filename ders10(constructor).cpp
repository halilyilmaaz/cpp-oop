#include <iostream>
using namespace std;
// constructer
class Nokta{
	private:
		int x;
		int y;
	protected:
		// kalýtým yoluyla turetilen sýnýflarýn uniq özelliklerini bu alanda tanýmlarsýn	
	public:
	
	//Nokta();// constructor prototip	
	Nokta(int,int);// parametreli bir constructor prototipi
	// ayrýca burada overload etmiþ oluyoruz
	int getX();
	int getY();
	
	void setX(int);
	void setY(int);
	
	
	void degerAta(int,int);
	void ekranaYaz();
	bool baslangicMi();

	
	
	
};
/*
Nokta::Nokta(){
	// Bu constructor ile fonksiyon ilk çalýþtýgýnda private olan deðiþkenlere deðer vermiþ olduk ve get set yazmamýza gerek kalmadý
	x = 2;
	y = 5;
}
*/
Nokta::Nokta(int x=1,int y=4){
	this->x = x;
	this->y = y;
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
void Nokta::setY(int _y){
	if(_y<5){
		y=_y;
	}else
	{
		y=2;
	}
	
}
void Nokta::degerAta(int _x,int _y){
	x=_x;
	y=_y;
}

void Nokta::ekranaYaz(){
		cout<<x<<","<<y<<endl;
	}
bool Nokta::baslangicMi(){
		return x==0&& y==0;
}

int main(){
	
	Nokta n1;
	Nokta n2;
	
	
	cout<< n1.getX()<<endl<<n1.getY()<<endl;
	cout<< n2.getX()<<endl<<n2.getY()<<endl;
	return 0;

}








