#include <stdio.h>
int main()
{
	int x,kare;
	printf("sayi gir: ");
	scanf("%d",&x);
	if(x<0)
	{
		printf("sayi sifirdan kucuk...");
	}
	kare=x*x;
	printf("karesi:%d ",kare);
}
