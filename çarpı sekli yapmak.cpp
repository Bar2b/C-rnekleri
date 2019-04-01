#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define M 5
#define N 5
int main ()
{
    int x[M][N];
	int i,j;
	srand(time(NULL));
	for(i = 0; i < M ;i++)
		  for(j = 0;j < N;j++)

		  		x[i][j] = rand() % 100;

	for(i = 0;i < M;i++)
	{
		  for(j =0;j < N;j++)
		  printf("%3d  ",x[i][j]);
    printf("\n");
}
	printf("----------------------------\n");
    for(i = 0;i < M;i++)
    {
		  for(j = 0;j < N;j++)
		  		if((i==j) || (i==N-j-1))
				  printf("%3d ",x[i][j]);

		  else printf("   ");

	printf("\n");
}
	return 0;
}
