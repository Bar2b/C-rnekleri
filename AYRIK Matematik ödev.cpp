#include<stdio.h>
#define N 100000
#include<math.h>

int main()
{
	int j,i,k,sal=0,s; //gerekli valiablerin taninmasi
	printf("Lutfen Bir Sayi Giriniz: "); scanf("%d",&s); //input
	int A[N]={0}; //dizi tanitiyoruz ama NULL
	for(i=2;i<s+1;i++)
		printf("%4d",i);
	for(i=2;i<=sqrt(s);i++) //input kokune kadar ilerliyoruz 2 den baslayip
	{
		if(A[i]==0)//eger hala null sa islem yap
		{
			j=i*i; //isleme i kare den basla cunku 2 yi yaparken 6 yi sildik 3 u yaparken direk 9dan baslatiyoruz  
			while(j<=s)//silme islemi s e kadar
			{
			A[j]=1;//silmeyi 1 ile sagliyorum
			j+=i;//j yi i kadar artiriyorum

			}
			printf("\n\n\n\n----------------------------------------------------------------------------------------------\n\n\n");//estetik
			printf("%d. adim ele alinan asal sayi:(%d)\n\n",++sal,i);//estetik
			for(k=2;k<=s;k++)
			{
				if(A[k]==0)
					printf("%4d",k);
				else
					printf(" ***");
			}
		}
	}
}
