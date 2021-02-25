#include <stdio.h>


int main(){
	
	int final,blok1,blok2,blok3,blok4,msd,pdo,sosyal,mesleksel,uygulama;
	float ort=0;
	printf("final : ");
	scanf("%d",&final);
	printf("blok1 : ");
	scanf("%d",&blok1);
	printf("blok2 : ");
	scanf("%d",&blok2);
	printf("blok3 : ");
	scanf("%d",&blok3);
	printf("blok4 : ");
	scanf("%d",&blok4);
	printf("msd : ");
	scanf("%d",&msd);
	printf("pdo : ");
	scanf("%d",&pdo);
	printf("sosyal : ");
	scanf("%d",&sosyal);
	printf("mesleksel : ");
	scanf("%d",&mesleksel);
	printf("uygulama : ");
	scanf("%d",&uygulama);
	
	ort=(final*0.3)+(blok1*0.075)+(blok2*0.075)+(blok3*0.075)+(blok4*0.075)+(msd*0.15)+(pdo*0.10)+(sosyal*0.05)+(mesleksel*0.05)+(uygulama*0.05);
	
	printf("ortalama %2.2f\n",ort);
	
	
	/*
	int final,vize;
	float ort=0;
	printf("final : ");
	scanf("%d",&final);
	printf("vize : ");
	scanf("%d",&vize);
	
	ort = (vize*0.40)+(final*0.60);
	
	int x = (vize*0.40);
	int ortalama = 65;
	int ihtiyac = ortalama -x;
	int y = (final*0.60);
	*/
	
	// vize =100  100 un yuzde 40 ý x=40   .
	// ihtiyac 25 puan... (hangi sayýnýn yuzde 60 ý 25 yapar)
	//		x 		60
	//		100 	
	
	
	
	
	
	
	return 0;
}
