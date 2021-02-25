#ifndef NOKTA_H
#define NOKTA_H


class Nokta{
	private:
		int x;
		int y;
		
	protected:
		// kalýtým yoluyla turetilen sýnýflarýn uniq özelliklerini bu alanda tanýmlarsýn	
	public:
	//	int* z;
		
	// constructor	
	Nokta();
	Nokta(int,int);	
	// destructor 
	// NOT: destructor parametresiz ve bir tane olmak zorunda..
	
	
	
	int getX();
	int getY();
	
	void setX(int);
	void setY(int);
	
	
	void degerAta(int,int);
	void ekranaYaz();
	bool baslangicMi();

	
	
	
};

#endif
