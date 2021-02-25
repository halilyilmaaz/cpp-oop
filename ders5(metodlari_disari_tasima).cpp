#include <iostream>
using namespace std;

class Nokta{
	
	public:
	int x,y;
	
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
	
	Nokta n;
	
	Nokta array[10];
	Nokta* Parray;
	Parray = new Nokta[10];
	n.degerAta(0,0);
	n.ekranaYaz();
	n.baslangicMi();
	
	for(int i=0;i<10;i++){
		array[i].degerAta(i,i+2);
		(Parray +sizeof(Nokta)*i)->degerAta(i+5,i+10);
	}
	for(int i=0;i<10;i++){
		array[i].ekranaYaz();
		(Parray+sizeof(Nokta)*i)->ekranaYaz();
		cout << endl;
	}
	
	

	return 0;

}

