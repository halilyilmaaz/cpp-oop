#include <iostream>
using namespace std;
class insan{
	protected:
		string tc;
		string isim;
		string soyisim;
		public:
			insan(string ,string ,string );
			string getTc(){return tc;}
			string getIsim(){return isim;}
			string getSoyisim(){return soyisim;}
			void setTc(string tc){this->tc=tc;}
			void setIsim(string isim){this->isim=isim; }
			void setSoyisim(string soyisim){this->soyisim=soyisim;}
			
};
class ogrenci:public insan{
	private:
		string ogrno;
	public:
		ogrenci(string ogrno="",string tc="",string isim="" ,string soyisim=""):ogrno(ogrno),insan(tc,isim,soyisim){
			
		}
		string getOgrno(){return ogrno;}
		void setOgrno(string ogrno){this->ogrno=ogrno;}
};
insan::insan(string tc,string isim,string soyisim){
	this->tc=tc;
	this->isim=isim;
	this->soyisim=soyisim;
}
int main(){
	
	
	
	insan halil("16685210290","halil","yilmaz");
	cout<< halil.getTc()<<halil.getIsim()<<halil.getSoyisim()<<endl;
	ogrenci ogr("1","12345678","ozkan","yilmaz");
	cout<<ogr.getOgrno()<<"  " <<ogr.getTc()<<ogr.getIsim()<<ogr.getSoyisim()<<endl;
	
	
	
	return 0;
}

