#include <stdio.h>
int main()
{
int adet,sayi,sayac=0,top=0;
printf("sayi adeti:");
scanf("%d",&adet);
oku:
	printf("sayi:");
	scanf("%d",&sayi);
	top=top+sayi;
	sayac=sayac+1;
	if(sayac<adet)
	{
		goto oku;
	}
	else
	{
		printf("toplam=%d",top);
	}



}
