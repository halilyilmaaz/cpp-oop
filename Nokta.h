#ifndef NOKTA_H
#define NOKTA_H


class Nokta{
	private:
		int x;
		int y;
		
	protected:
		// kal�t�m yoluyla turetilen s�n�flar�n uniq �zelliklerini bu alanda tan�mlars�n	
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
