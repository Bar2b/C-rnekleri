#include<stdio.h>

int main ()
{
	int n,s=0;
	
	do {
		printf("Bir sayi giriniz:");
		scanf("%d", &n);
		s+=n;
		
	}
	while (n!=0);
	printf("\nToplam = %d",s);

		
	return 0;
}
