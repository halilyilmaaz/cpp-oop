#include <iostream>
using namespace std;

class Nokta{
	private:
		int x;
	protected:
		// kalýtým yoluyla turetilen sýnýflarýn uniq özelliklerini bu alanda tanýmlarsýn	
	public:
		int y;
	
	void degerAta(int,int);
	void ekranaYaz();
	bool baslangicMi();

	
	
	
};
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
	n1.x = 5;
	n1.y = 7;
	cout<<n1.x<<endl;
	cout<<n1.y;

	return 0;

}

