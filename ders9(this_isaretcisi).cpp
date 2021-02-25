#include <iostream>
using namespace std;

class Nokta{
	private:
		int x;
		int y;
	protected:
		// kalýtým yoluyla turetilen sýnýflarýn uniq özelliklerini bu alanda tanýmlarsýn	
	public:
		
	int getX();
	int getY();
	
	void setX(int);
	void setY(int);
	
	
	void degerAta(int,int);
	void ekranaYaz();
	bool baslangicMi();

	
	
	
};
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
		if(x==0&& y==0){
			
			cout<< "true";
			return true;
		}else{
		cout<< "false";
			return false;
			
		}
}

int main(){
	
	Nokta n1;
	n1.setX(10);
	n1.setY(6);
	
	cout<< n1.getX()<<endl<<n1.getY()<<endl;
	
	return 0;

}








