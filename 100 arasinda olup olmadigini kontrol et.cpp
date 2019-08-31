#include <stdio.h>
int main()
{
int sayi,oku;
printf("sayi gir: ",sayi);
scanf("%d",&sayi);
if(sayi<100 || sayi>0)
{
	printf("girilen sayi 100 arasinda",sayi);
}
else
{
	printf("girilen sayi 100 arasinda degil",sayi);
}
}
