#include <stdio.h>
int main()
{
int sayi,oku;
printf("sayi gir: ",sayi);
scanf("%d",&sayi);
if(sayi>100)
{
	printf("girilen sayi 100 den buyuk",sayi);
}
else if(sayi<0)
{
	printf("girilen sayi 0 dan kucuk",sayi);
}
else
{
	printf("girilen sayi 0 ile 100 arasinda",sayi);
}
}
