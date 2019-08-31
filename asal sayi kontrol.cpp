#include <stdio.h>
int asal_mi(int sayi)
{
	int i;
	for(i=2; i<sayi; i++)
	{
		if(sayi%i==0)
		{
			return 0;
		}
	}
}
int main ()
{
	int n;
	printf("bir sayi gir:");
	scanf("%d",&n);
	if(asal_mi(n)==0)
	{
			printf("bu sayi asal sayi degildir");
	}
	else
	{
			printf("bu sayi asal sayidir");
	}
}
