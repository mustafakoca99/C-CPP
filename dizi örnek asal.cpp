#include <stdio.h>
int main ()
{
//asal sayýlarý alt alta yazdýrma
/*
int asal[5];
asal[0]=1;
asal[1]=3;
asal[2]=5;
asal[3]=7;
asal[4]=11;
int s;
for(s=0; s<5; s++)
printf("%d\n",asal[s]);
*/


//virgullu sayýlarý alt alta yazdýrma
/*
int i;
double r[4]={1.5,3.22,3.25,0.7};
for(i=0; i<=3; i++)
printf("%f",r[i]);
*/


//dizi uzunlugunu belirtme
/*
int elemanlar[]={1,2,3,4};
int l;
l=sizeof(elemanlar)/sizeof(int);
printf("dizi uzunlugu=%d",l);
*/


//dizi elemanlarýnýn konsola yazýlmasý
/*
int dizi1[]={1,2,3,4};
int dizi2[3];
dizi2[0]=11;
dizi2[1]=12;
dizi2[2]=13;
int i;
for(i=0; i<4; i++)
printf("dizi1 %d indisli eleman:%d\n",i,dizi1[i]);
printf("\n");
for(i=0; i<3; i++)
printf("dizi2 %d indisli eleman:%d\n",i,dizi2[i]);
*/


//dizi degerlerinin konsola yazýlnmasý
/*
int dizi[]={1,2,3,4};
int dizi1[3];
dizi1[0]=11;
dizi1[1]=12;
dizi1[2]=13;
int i;
int l1=sizeof(dizi)/sizeof(int);
for(i=0; i<11; i++)
printf("dizi %d indisli elaman:%d\n",i,dizi[i]);
printf("\n");
int l2=sizeof(dizi1)/sizeof(int);
for(i=0; i<12; i++)
printf("dizi1 %d indisli eleman:%d\n",i,dizi1[i]);
*/

//konsoldaki sayýlarýn okunmasý
/*
int i,toplam=0;
int sayi[4];
printf("ard arda bosluk birakarak 4 tamsayi giriniz:");
scanf("%d %d %d %d",&sayi[0],&sayi[1],&sayi[2],&sayi[3]);
toplam=sayi[0]+sayi[1]+sayi[2]+sayi[3];
printf("toplam=%d",toplam);
return 0;
*/


//konsoldaki sayýlarýn okunmasý iki
/*
int mustafa[6];
int i;
for(i=1; i<6; i++)
{
	printf("%d. sayi elemani:",i);
	scanf("%d",&mustafa[i]);
}
printf("\n");
for(i=1; i<6; i++)
printf("%d. indisli elemani %d\n",i,mustafa[i]);
return 0;
*/


//n elemanli dizi olusturulmasý ve eleman atanmasý
/*
int n;
printf("n:");
scanf("%d",&n);
int dizi[n];
int i;
for(i=1; i<n; i++)
{
	printf("dizinin %d indisli eleman:",i);
	scanf("%d",&dizi[i]);
}
printf("\ndizi elemanlari:\n");
for(i=1; i<n; i++)
printf("dizinin %d indisli elemani:%d",i,dizi[i]);
return 0;
*/


//dizinin elemanlarýnýn toplamý ve ortalamasý
/*
int l,top=0;
double ort=0;
int n;
printf("n:");
scanf("%d",&n);
int dizi[n];
l=sizeof(dizi)/sizeof(int);
int i;
for(i=1; i<=n; i++)
{
	printf("dizinin %d indisli elemani:",i);
	scanf("%d",&dizi[i]);
}
top=top+dizi[i];
ort=top/n;
printf("toplam=%d\n",top);
printf("ortalama=%lf",ort);
*/


//girilen istedigimiz kadar sayýnýn tersten yazýlýmý
/*
int i,n;
int dizi[n];
printf("n:");
scanf("%d",n);
for(i=0; i<n; i++)
printf("%d \n",dizi[n]);
printf("\n");
for(i=n-1; i>=0; i--)
printf("%d \n",dizi[n]);
return 0;
*/


//karakter dizilerine veri girisi ad yazýmý
/*
char ad[50];
printf("adinizi giriniz:");
scanf("%s",ad);
printf("adiniz=%s",ad);
return 0;
*/


//gets kodu eklenmýs hali ad yazdýrma char veri tipi ile
/*
char ad[50];
printf("adinizi girin:");
gets(ad);
printf("\n");
printf("adiniz=%s",ad);
return 0;
*/



}

