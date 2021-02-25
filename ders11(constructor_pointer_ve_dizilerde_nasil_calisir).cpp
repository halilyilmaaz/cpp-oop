#include <iostream>
using namespace std;

class Nokta{
	private:
		int x;
		int y;
	protected:
		// kalýtým yoluyla turetilen sýnýflarýn uniq özelliklerini bu alanda tanýmlarsýn	
	public:
	Nokta();
	Nokta(int,int);	
	int getX();
	int getY();
	
	void setX(int);
	void setY(int);
	
	
	void degerAta(int,int);
	void ekranaYaz();
	bool baslangicMi();

	
	
	
};
Nokta::Nokta(){
	cout<<"parametresiz kurucu"<<endl;
	
}
Nokta::Nokta(int x,int y=8){
	cout<<"parametreli kurucu"<<endl;
	this->x=x;
	this->y=y;
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
	
	
	
	Nokta dizi[7] = {{1,2},{1},{2,3}};
	for(int i=0;i<5;i++){
		cout<<dizi[i].getX()<<" "<<dizi[i].getY()<<endl;
	}
	
	
	Nokta* ptr= new Nokta(2,7);
	cout<<ptr->getX()<<" "<<ptr->getY()<<endl;
	
	
	
	
	return 0;

}








