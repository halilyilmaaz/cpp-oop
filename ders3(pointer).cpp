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
		return x==0 && y==0;
	}
	
};



int main(){
	
	Nokta n;
	Nokta* n1;
	Nokta* n2;
	n2 = new Nokta();
	
	Nokta array[10];
	Nokta* Parray;
	Parray = new Nokta[10];
	
	for(int i=0;i<10;i++){
		array[i].degerAta(i,i+2);
		(Parray +sizeof(Nokta)*i)->degerAta(i+5,i+10);
	}
	for(int i=0;i<10;i++){
		array[i].ekranaYaz();
		(Parray+sizeof(Nokta)*i)->ekranaYaz();
		cout << endl;
	}
	
	n.degerAta(0,0);
	n.ekranaYaz();
	n.baslangicMi();
	
	
n2->degerAta(100,200);
n2->ekranaYaz();
	return 0;

}

