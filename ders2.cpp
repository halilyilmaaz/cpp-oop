#include <iostream>
using namespace std;

class Nokta{
	
	public:
	int x,y;
	// method(deger döndürmeyen -void- olsun)
	void degerAta(int _x,int _y){
		x=_x;
		y=_y;
	}
	void ekranaYaz(){
		cout<<x<<","<<y<<endl;
	}
	bool baslangicMi(){
		if(x==0&& y==0){
			
			cout<< "true";
			return true;
		}else{
		cout<< "false";
			return false;
			
		}
	}
	
};



int main(){
	
	Nokta n;
	n.degerAta(0,0);
	n.ekranaYaz();
	n.baslangicMi();
	
	

	return 0;

}

