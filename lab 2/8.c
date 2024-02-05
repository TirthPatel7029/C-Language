#include<stdio.h>

main()
{
	int a,sum=0,x=1;
	printf("enter the a=");
	scanf("%d",&a);
	
	do
	{
		sum=sum+x;
		x++;
	}while(x<=a);
	{
		printf("%d",sum);
	}
}	
