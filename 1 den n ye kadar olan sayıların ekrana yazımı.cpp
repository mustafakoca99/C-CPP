#include <stdio.h>
int main()
{
int n,s=0;
printf("girilecek sayi:");
scanf("%d",&n);
git:
	s=s+2;
	printf("%d\n",s);
	if(s<n)
	{
		goto git;
		return 0;
	}
}
