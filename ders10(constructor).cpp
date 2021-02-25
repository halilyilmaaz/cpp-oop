#include <iostream>
using namespace std;
// constructer
class Nokta{
	private:
		int x;
		int y;
	protected:
		// kal�t�m yoluyla turetilen s�n�flar�n uniq �zelliklerini bu alanda tan�mlars�n	
	public:
	
	//Nokta();// constructor prototip	
	Nokta(int,int);// parametreli bir constructor prototipi
	// ayr�ca burada overload etmi� oluyoruz
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
	// Bu constructor ile fonksiyon ilk �al��t�g�nda private olan de�i�kenlere de�er vermi� olduk ve get set yazmam�za gerek kalmad�
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








