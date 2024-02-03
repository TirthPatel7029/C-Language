#include<stdio.h>

main()
{
	int x=1,y;
	printf("enter the value of y=");
	scanf("%d",&y);
	while(y>=x)
	{
		if(y%2==0)
		{
		printf("%d ",y);
		}
	y--;
	}
}
