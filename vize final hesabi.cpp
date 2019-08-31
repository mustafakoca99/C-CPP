#include <stdio.h>
int main()
{
	int vize,final,but=0;
	double sonuc;
	printf("vize notunuzu giriniz:",vize);
	scanf("%d",&vize);
	printf("final notunuzu giriniz:",final);
	scanf("%d",&final);
	sonuc=(vize*4/10)+(final*6/10);
	if(sonuc<50)
		{
				printf("bute kaldiniz\nsonuc:%lf",sonuc);
		}
		else
		{
			printf("gectiniz\nsonuc:%lf",sonuc);	
		}
}
