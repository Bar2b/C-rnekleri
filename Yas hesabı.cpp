#include<stdio.h>

int main ()
{
	int dogum,deger;
	printf("Dogum yilinizi giriniz: ");
	scanf("%d", &dogum);
	
	deger = 2018-dogum;
	printf("Yasiniz %d \n",deger);
	
	if ( deger>=1 && deger<=5)
	   printf(" Bebek ");
	else if ( deger>=5 && deger<=18)
	   printf("Genc");
	else if  ( deger>=18 && deger<=50)
	   printf("Orta yasli");
	   
	return 0;
	
}
