#include<stdio.h>
#include<conio.h>

int main()
{
	int a=1,b=100,c,x=0;
	char ch;
	
	printf("1-100 arasi bir sayi tutunuz.\n\n");
	do
	{
		x++;
		c=(a+b)/2;
		printf("\nTuttugunuz sayi %d mi?  <,=,> : ",c);
		ch=getch();
		//scanf("%c",&ch);
		if(ch=='<')
			b=c;
		else if(ch=='>')
				a=c;
		else
		{
			printf("\n\n %d denemede bildim.\n",x);
			break;
		}			
	}while(1);
	
	return 0;
}

