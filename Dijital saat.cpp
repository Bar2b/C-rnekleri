#include <stdio.h>
#include <windows.h>
int main()
{
int i,j,l;
for(i=0;i<24;i++)
{
for(j=0;j<60;j++)
{
for(l=0;l<60;l++)
{
printf("%02d:%02d:%02d\n",i,j,l);
Sleep(1000);
}
}
}
return 0;
}
