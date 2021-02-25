#include <iostream>
using namespace std;

class Kolon{
	
	int * data;
	int boyut;
	public:
		Kolon(int boyut=1) : boyut(boyut){
			data = new int[boyut];
			cout << boyut <<" : elemanli bir dizi olustu"<<endl;
			
		}
		// kopyalama kurucusu *sýnýfla ayný isimde olmalý *constla yazýlýr * referans kullanýlýr.
		Kolon(const Kolon& k){
			this->boyut = k.boyut;
			data = new int[boyut];
			
			for(int i=0;i<boyut;i++){
				data[i] = k.data[i];
			}
		}
		~Kolon(){
			 // array cinsinden bir pointer olduðu için delete deðil 
			 // delete[] þeklinde silinmelidir.
			 delete[] data;
			 cout << "yikici diziyi sildi"<< endl;
		}
		int getBoyut(){
			return boyut;
		}
		void setBoyut(int boyut){
			this->boyut=boyut;
		}
};



int main(){
	Kolon k;
	Kolon k2(k);
	Kolon k3(k2);
	
	
	
	
	
	return 0;
}
