#ifndef _NOKTA_
#define _NOKTA_
#include "Nokta.h"
#include <iostream>
using namespace std;

Nokta::Nokta(){
	cout<<"parametresiz kurucu"<<x <<" "<<y<<endl;
	x=1;
	y=2;
	z = new int(5);
}
Nokta::Nokta(int x,int y){
	cout<<"parametreli kurucu"<<x <<" "<<y<<endl;
	this->x=x;
	this->y=y;
	z = new int(6);
}
// destructor





int Nokta::getX(){
	return x;
}
int Nokta::getY(){
	return y;
}


void Nokta::setX(int x){
	this->x=x;
}
void Nokta::setY(int y){
	this->y=y;	// set fonk. üzerinde deðiþkene istediðimiz islemi yaparýz
}
void Nokta::degerAta(int x,int y){
	this->x=x;
	this->y=y;
}

void Nokta::ekranaYaz(){
		cout<<x<<","<<y<<endl;
}

bool Nokta::baslangicMi(){
		return x==0 && y==0;
}
#endif
