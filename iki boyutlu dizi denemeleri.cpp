#include <stdio.h>
int main()
{
	//iki boyutlu dizinin elemanlarýný okuma 
	/*
	int satir,sutun;
	int dizi[3][2];
	for(satir=0; satir<3; satir++)
	{
	for(sutun=0; sutun<2; sutun++)
	{
			printf("index %d%d:",satir,sutun);
		scanf("%d",&dizi[satir][sutun]);
			printf("\n");
		}
	
	}
	*/
	
	
	//m ve n elemnlý dizi olusturma ve eleman okuma-yazma
	/*
	int m,n;
	int dizi[m][n];
	printf("satir giriniz:");
	scanf("%d",&m);
	printf("sutun giriniz:");
	scanf("%d",&n);
	int i,j;
	for(i=0; i<m; i++)
	{
		printf("satir sayisi=%d%d:",i,j);
		scanf("%d",&dizi[i][j]);
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d%d:%d",i,j,dizi[i][j]);
		}
	}
	*/
	
	
	//ogrenvi sýnav notlarý
	/*
	int dizi[10][3];
	int ort[10];
	int i,j;
	for(i=0; i<10; i++)
	{
		printf("%d ogrenci:",i+1);
		for(j=0; j<3; j++)
		{
			scanf("%d",&dizi[i][j]);
		}
		ort[i]=dizi[i][j]*0.4+dizi[i][j]*0.6;
	}
	for(i=0; i<10; i++)
	printf("no:%d ort:%d \n",dizi[i][0],ort[i]);
	return 0;
	*/
	
	
	//istedigin kadar n sayýsýný ekrana yazdýrma
	/*
	int n,dizi[9];
	printf("n:");
	scanf("%d",&n);
	dizi[0]=1;
	dizi[1]=2;
	dizi[2]=3;
	dizi[3]=4;
	dizi[4]=5;
	dizi[5]=6;
	dizi[6]=7;
	dizi[7]=8;
	dizi[8]=9;
	int i;
	for(i=0; i<n; i++)
	{
		printf("girilen sayilar:%d\n",dizi[i]);
	}
	*/
	
	
	//dizi elemanlarýnýn konsola yazýlmasý
	/*	int dizi[]={1,2,3,4};
	int dizi1[3];
	dizi1[0]=1;
	dizi1[1]=2;
	dizi1[2]=3;
	int i;
	int l1=sizeof(dizi)/sizeof(int);
	for(i=0; i<4; i++)
	printf("dizi %d indisli eleman: %d\n",i,dizi[i]);
	printf("\n");
	int l2=sizeof(dizi1)/sizeof(int);
	for(i=0; i<3; i++)
	printf("dizi1 %d indisli eleman: %d\n",i,dizi1[i]);
	*/
	
	
	//komsoldan girilen sayilarin toplami
	/*
	int i,n,top=0,kare,kare1,kare2,kare3,kare4,kare5,kare6,kare7,kare8;
	double ort=0;
	int sayi[n];
	printf("n:");
	scanf("%d",&n);
			printf("sayi gir:");
		scanf("%d",&sayi[0],&sayi[1],&sayi[2],&sayi[3],&sayi[4],&sayi[5],&sayi[6],&sayi[7],&sayi[8],&sayi[9]);
		top=sayi[0]+sayi[1]+sayi[2]+sayi[3]+sayi[4]+sayi[5]+sayi[6]+sayi[7]+sayi[8]+sayi[9];
		kare=sayi[0]*sayi[0];
		kare1=sayi[1]*sayi[1];
		kare2=sayi[2]*sayi[2];
		kare3=sayi[3]*sayi[3];
		kare4=sayi[4]*sayi[4];
		kare5=sayi[5]*sayi[5];
		kare6=sayi[6]*sayi[6];
		kare7=sayi[7]*sayi[7];
		kare8=sayi[8]*sayi[8];
		ort=top/n;
	for(i=0; i<n; i++)
	{
		printf("girilen sayilar:%d\n\n",sayi[i]);
	}
	printf("ortalama=%.2lf\n",ort);
	printf("toplam=%d\n",top);
	printf("kareleri=%d %d %d %d",kare,kare1,kare2,kare3);
	return 0;
	*/
	
	
	//n elemanlý dizinin eleman atanmasý
	/*
	int n;
	printf("n:");
	scanf("%d",&n);
	int dizi[n];
	int i;
	for(i=0; i<n; i++)
	{
		printf("dizinin %d indisli elemani:%d",i);
		scanf("%d",&dizi[i]);
	}
	printf("dizi elemanlari:");
	for(i=0; i<n; i++)
	printf("dizinin %d indisli elemani:%d",i,dizi[i]);
	return 0;
	*/
	
	
	//n elemanýnýn toplamý ve ortalamasý
	/*
	int i,n,top=0,ort=0;
	printf("n:");
	scanf("%d",&n);
	for(i=0; i<=n; i++)
	top=top+i;
	ort=top/n;
	printf("toplam=%d ortalama=%d",top,ort);
	return 0;
	*/
	
	//tersten yazdýrma
	/*
	int i,l;
	int dizi[]={1,2,3,4,5};
	l=sizeof(dizi)/sizeof(int);
	for(i=0; i<l; i++)
	printf("%d",dizi[i]);
	for(i=l-1; i>=l; i--)
	printf("%d",dizi[i]);
	*/
	
	
	//karaketr dizilerinde veri girisi
	/*
	char ad[20];
	printf("adinizi giriniz:");
	scanf("%s",ad);
	printf("adiniz=%s",ad);
	return 0;
	*/
	
	
	char ad[]="mustafa";
	char soyad[]="koca";
	puts(ad);
	puts(soyad);
}
