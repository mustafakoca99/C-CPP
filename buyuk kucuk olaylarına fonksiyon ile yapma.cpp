#include <stdio.h>
int fonsiyon(int x, int y)
{
	if(x<y)
	{
	printf("x y den kucuk");
	}
	else
	{
	printf("y x den kucuk");
}
}
int main()
{
	int sayi1,sayi2,buyukk,kucuk;
	printf("sayi1:",sayi1);
	scanf("%d",sayi1);
	buyukk=fonsiyon(sayi1);
	printf("sayi2",sayi2);
	scanf("%d",sayi2);
    kucuk=fonsiyon(sayi2);
}

