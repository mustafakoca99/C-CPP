#include <stdio.h>
int main()
{
int x,n;
double top=0, ort=0, sayi;
printf("n:");
scanf("%d",&n);
for(x=1; x<=n; x++)
{
	printf("%d. sayi",x);
	scanf("%lf",&sayi);
	top=top+sayi;
	ort=top/n;
 } 
 printf("toplama=%.2lf\n",top);
 printf("ortalama=%.2lf",ort);
}
